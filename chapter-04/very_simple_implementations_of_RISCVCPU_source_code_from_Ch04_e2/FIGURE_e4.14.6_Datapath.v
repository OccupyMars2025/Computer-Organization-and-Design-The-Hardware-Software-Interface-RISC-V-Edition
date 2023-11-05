/* 2023/11/4 16:48

FIGURE e4.14.6 A Verilog version of the multicycle RISC-V datapath that is appropriate
for synthesis. This datapath relies on several units from Appendix A. Initial statements do not synthesize,
and a version used for synthesis would have to incorporate a reset signal that had this effect. Also note that
resetting R0 to 0 on every clock is not the best way to ensure that R0 stays at 0; instead, modifying the
register file module to produce 0 whenever R0 is read and to ignore writes to R0 would be a more efficient
solution.

*/

module Datapath (ALUOp, MemtoReg, MemRead, MemWrite, 
    IorD, RegWrite, IRWrite,
    PCWrite, PCWriteCond, ALUSrcA, ALUSrcB, PCSource,
    opcode, clock
); // the control inputs + clock

    parameter LW = 7'b000_0011, SW = 7'b010_0011;

    input [1:0] ALUOp, ALUSrcB; // 2-bit control signals
    input MemtoReg, MemRead, MemWrite, IorD, RegWrite, IRWrite, PCWrite;
    input PCWriteCond, ALUSrcA, PCSource, clock; // 1-bit control signals
    output [6:0] opcode; // opcode is needed as an output by control
    
    // MDR: Memory Data Register
    reg [31:0] PC, MDR, ALUOut; // CPU state + some temporaries
    reg [31:0] Memory[0:1023], IR; // CPU state + some temporaries
    
    wire [31:0] A, B, SignExtendOffset, ImmGen, PCOffset, ALUResultOut, PCValue, JumpAddr, Writedata, ALUAin, ALUBin, MemOut; // these are signals derived from registers
    wire [3:0] ALUCtl; // the ALU control lines
    wire Zero; // the Zero out signal from the ALU
    
    initial PC = 0; //start the PC at 0
    
    //Combinational signals used in the datapath
    // Read using word address with either ALUOut or PC as the address source
    assign MemOut = MemRead ? Memory[(IorD ? ALUOut : PC) >> 2] : 0;
    assign opcode = IR[6:0]; // opcode shortcut
    // Get the write register data either from the ALUOut or from the MDR
    assign Writedata = MemtoReg ? MDR : ALUOut;
    // Generate immediate
    assign ImmGen = (opcode == LW) ? {{21{IR[31]}}, IR[30:20]} :
                 /* (opcode == SW) */{{21{IR[31]}}, IR[30:25], IR[11:7]};
    // Generate pc offset for branches
    assign PCOffset = {{20{IR[31]}}, IR[7], IR[30:25], IR[11:8], 1'b0};
    // The A input to the ALU is either the rs register or the PC
    assign ALUAin = ALUSrcA ? A : PC; // ALU input is PC or A
    
    // Creates an instance of the ALU control unit (see the module defined in Figure A.5.16
    // Input ALUOp is control-unit set and used to describe the instruction class as in Chapter 4
    // Input IR[31:25] is the function code field for an ALU instruction
    // Output ALUCtl are the actual ALU control bits as in Chapter 4
    ALUControl alucontroller (ALUOp, IR[31:25], ALUCtl); // ALU control unit

    // Creates a 2-to-1 multiplexor used to select the source of the next PC
    // Inputs are ALUResultOut (the incremented PC), ALUOut (the branch address)
    // PCSource is the selector input and PCValue is the multiplexor output
    Mult2to1 PCdatasrc (ALUResultOut, ALUOut, PCSource, PCValue);


    // Creates a 4-to-1 multiplexor used to select the B input of the ALU
    // Inputs are register B, constant 4, generated immediate, PC offset
    // ALUSrcB is the select or input
    // ALUBin is the multiplexor output
    Mult4to1 ALUBinput (B, 32'd4, ImmGen, PCOffset, ALUSrcB, ALUBin);
    
    // Creates a RISC-V ALU
    // Inputs are ALUCtl (the ALU control), ALU value inputs (ALUAin, ALUBin)
    // Outputs are ALUResultOut (the 32-bit output) and Zero (zero detection output)
    RISCVALU ALU (ALUCtl, ALUAin, ALUBin, ALUResultOut, Zero); // the ALU


    // Creates a RISC-V register file
    // Inputs are the rs1 and rs2 fields of the IR used to specify which registers to read,
    // Writereg (the write register number), Writedata (the data to be written),
    // RegWrite (indicates a write), the clock
    // Outputs are A and B, the registers read
    registerfile regs (IR[19:15], IR[24:20], IR[11:7], Writedata,
        RegWrite, A, B, clock); // Register file

    // The clock-triggered actions of the datapath
    always @(posedge clock) begin
        if (MemWrite) Memory[ALUOut >> 2] <= B; // Write memory--must be a store
        ALUOut <= ALUResultOut; // Save the ALU result for use on a later clock cycle
        if (IRWrite) IR <= MemOut; // Write the IR if an instruction fetch
        MDR <= MemOut; // Always save the memory read value
        // The PC is written both conditionally (controlled by PCWrite) and unconditionally
    end
endmodule

