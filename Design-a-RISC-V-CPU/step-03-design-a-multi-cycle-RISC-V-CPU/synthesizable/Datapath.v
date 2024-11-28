// FIGURE e4.14.6 A Verilog version of the multicycle RISC-V datapath that is appropriate
//     for synthesis. This datapath relies on several units from Appendix A. Initial statements do not synthesize,
//     and a version used for synthesis would have to incorporate a reset signal that had this effect. Also note that
//     resetting R0 to 0 on every clk is not the best way to ensure that R0 stays at 0; instead, modifying the
//     register file module to produce 0 whenever R0 is read and to ignore writes to R0 would be a more efficient
//     solution

module Datapath #(parameter BIT_WIDTH = 32) (
    input [1:0] ALUOp, ALUSrcB, // 2-bit control signals
    input MemtoReg, MemRead, MemWrite, IorD, RegWrite, IRWrite, PCWrite, PCWriteCond, ALUSrcA, PCSource, // 1-bit control signals
    input clk,
    output [6:0] opcode // opcode is needed as an output by control
); // the control inputs + clk
    parameter LW = 7'b000_0011, 
              SW = 7'b010_0011,
            ADDI = 7'b001_0011;
    
    reg [31:0] PC, MDR, IR, ALUOut; // CPU state + some temporaries
    reg [31:0] Memory[0:1023]; 
    
    /*
    TODO: Caution: wire [31:0] A, B 
    I think A, B should all be registers.
    */
    // reg [31:0] A, B;
    wire [31:0] A, B, SignExtendOffset, PCOffset, ALUResultOut, PCValue, JumpAddr, WriteData, ALUAin, ALUBin, MemOut, MemAddr; // these are signals derived from registers
    wire [31:0] ImmGen;
    wire [3:0] ALUCtl; // the ALU control lines
    wire Zero; // the Zero out signal from the ALU
    wire IfWritePC; // the final signal to decide whether to write PC
    
    
    initial PC = 0; //start the PC at 0


    initial begin
        // Initialize all memory locations to 0
        integer i;
        for (i = 0; i <= 1023; i = i + 1) begin
            Memory[i] = {BIT_WIDTH{1'b0}};
        end

        // Load instructions into memory (overwrite with provided data)
        $readmemh("RISC-V-Assembly-Program/instructions.mem", Memory);
        for (i = 0; i < 16; i++) begin
            $display("Memory[%02d]: 0x%08h", i, Memory[i]);
        end
    end
    

    always @(*) begin
        if (IR == 0) begin
            // Stop running on "no instruction"
            $display("no instruction at PC: 0x%08x", PC);
            $finish; // Stop simulation
        end
    end

    // always @(*) begin
    //     if (IR == 'h13) begin
    //         // Stop running on "NOP instruction"
    //         $display("NOP instruction at PC: 0x%08x", PC);
    //         $finish; // Stop simulation
    //     end
    // end

    integer i;

    always @(negedge clk) begin
        $display("PC=0x%08h, Memory contents at time %0t:", PC, $time);
        for (i = 0; i < 16; i++) begin
            $display("Memory[%02d]: 0x%08h", i, Memory[i]);
        end
        for (i = 97; i < 104; i++) begin
            $display("Memory[%02d]: 0x%08h", i, Memory[i]);
        end
    end

    //Combinational signals used in the datapath
    assign MemAddr = (IorD ? ALUOut : PC);
    // Read using word address with either ALUOut or PC as the address source
    assign MemOut = MemRead ? Memory[MemAddr >> 2] : 0;
    assign opcode = IR[6:0]; // opcode shortcut
    // Get the write register data either from the ALUOut or from the MDR
    assign WriteData = MemtoReg ? MDR : ALUOut;
    // Generate immediate
    assign ImmGen = ((opcode == LW) || (opcode == ADDI)) ? {{(BIT_WIDTH-11){IR[31]}}, IR[30:20]} :
                     /* (opcode == SW) */{{(BIT_WIDTH-11){IR[31]}}, IR[30:25], IR[11:7]};
    // Generate pc offset for branches
    assign PCOffset = {{(BIT_WIDTH-11-1){IR[31]}}, IR[7], IR[30:25], IR[11:8], 1'b0};
       
    // The A input to the ALU is either the rs register or the PC
    assign ALUAin = ALUSrcA ? A : PC; // ALU input is PC or A
    assign IfWritePC = PCWrite | (PCWriteCond & Zero);



    // Creates an instance of the ALU control unit (see the module defined in Figure A.5.16
    // Input ALUOp is control-unit set and used to describe the instruction class as in Chapter 4
    // Input IR[31:25] is the function code field for an ALU instruction
    // Output ALUCtl are the actual ALU control bits as in Chapter 4
    ALUControl alucontroller (
        .ALUOp(ALUOp),         
        .Func7(IR[31:25]), 
        .Func3(IR[14:12]), 
        .ALUCtl(ALUCtl)         
    ); 
// module ALUControl (
//     input [1:0] ALUOp,
//     input [6:0] Func7,
//     input [2:0] Func3,
//     output [3:0] ALUCtl
// );

    // Creates a 2-to-1 multiplexor used to select the source of the next PC
    // Inputs are ALUResultOut (the incremented PC, PC+4), ALUOut (the branch target address)
    // PCSource is the selector input and PCValue is the multiplexor output
    Mult2to1 PCdatasrc (
        .In1(ALUResultOut), 
        .In2(ALUOut), 
        .Sel(PCSource), 
        .Out(PCValue)
    );
    
    // Creates a 4-to-1 multiplexor used to select the B input of the ALU
    // Inputs are register B, constant 4, generated immediate, PC offset
    // ALUSrcB is the select 
    // ALUBin is the multiplexor output
    Mult4to1 ALUBinput (
        .In1(B), 
        .In2(32'd4), 
        .In3(ImmGen), 
        .In4(PCOffset), 
        .Sel(ALUSrcB), 
        .Out(ALUBin)
    );


    // Creates a RISC-V ALU
    // Inputs are ALUCtl (the ALU control), ALU value inputs (ALUAin, ALUBin)
    // Outputs are ALUResultOut (the 32-bit output) and Zero (zero detection output)
    RISCVALU ALU (
        .ALUCtl(ALUCtl),  // input [3:0] ALUCtl,
        .A(ALUAin),       //  input [31:0] A, B,
        .B(ALUBin), 
        .ALUOut(ALUResultOut),  // output reg [31:0] ALUOut,
        .Zero(Zero)      //  output Zero
    ); 


    // Creates a RISC-V register file
    // Inputs are the rs1 and rs2 fields of the IR used to specify which registers to read,
    // Writereg (the write register number), WriteData (the data to be written),
    // RegWrite (indicates a write), the clk
    // Outputs are A and B, the registers read
    RegisterFile regs (
        .Read1(IR[19:15]), 
        .Read2(IR[24:20]), 
        .WriteReg(IR[11:7]), 
        .WriteData(WriteData),
        .RegWrite(RegWrite), 
        .clk(clk),
        .Data1(A), 
        .Data2(B)
    ); // Register file   
// module registerfile (
//     input [4:0] Read1, Read2, WriteReg, // the register numbers to read or write
//     input [31:0] WriteData, // data to write
//     input RegWrite, // the write control
//     input clk, // the clk to trigger write
//     output [31:0] Data1, Data2 // the register values read 
// );

    // The clk-triggered actions of the datapath
    always @(posedge clk) begin
        if (MemWrite) Memory[MemAddr >> 2] <= B; // Write memory--must be a store
        ALUOut <= ALUResultOut; // Save the ALU result for use on a later clk cycle
        if (IRWrite) IR <= MemOut; // Write the IR if an instruction fetch
        MDR <= MemOut; // Always save the memory read value
        // The PC is written both conditionally (controlled by PCWriteCond) and unconditionally
        if (IfWritePC) PC <= PCValue; // Write the PC if PCWrite or (PCWriteCond and Zero)
    end
endmodule

