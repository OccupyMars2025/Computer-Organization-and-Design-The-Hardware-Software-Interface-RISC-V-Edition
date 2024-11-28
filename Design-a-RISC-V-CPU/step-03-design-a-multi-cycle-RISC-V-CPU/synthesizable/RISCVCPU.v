// FIGURE e4.14.7 The RISC-V CPU using the datapath from Figure e4.14.6.

module RISCVCPU (input clk, reset);
    //opcodes
    parameter LW = 7'b000_0011, 
              SW = 7'b010_0011, 
             BEQ = 7'b110_0011, 
           ALUop = 7'b011_0011,  // R-type instructions
            ADDI = 7'b001_0011;

    reg [2:0] state;
    wire [1:0] ALUOp, ALUSrcB;
    wire [6:0] opcode;
    wire MemtoReg, MemRead, MemWrite, IorD, RegWrite, IRWrite, PCWrite, PCWriteCond, ALUSrcA, PCSource, MemoryOp;
    
    // Create an instance of the RISC-V datapath, the inputs are the control signals; opcode is only output
    Datapath RISCVDP (
        .ALUOp(ALUOp), .ALUSrcB(ALUSrcB),
        .MemtoReg(MemtoReg), .MemRead(MemRead), 
        .MemWrite(MemWrite), .IorD(IorD), 
        .RegWrite(RegWrite), .IRWrite(IRWrite),
        .PCWrite(PCWrite), .PCWriteCond(PCWriteCond), 
        .ALUSrcA(ALUSrcA), .PCSource(PCSource),
        .clk(clk), 
        .opcode(opcode)
    );
    // module Datapath #(parameter BIT_WIDTH = 32) (
    //     input [1:0] ALUOp, ALUSrcB, // 2-bit control signals
    //     input MemtoReg, MemRead, MemWrite, IorD, RegWrite, IRWrite, PCWrite, PCWriteCond, ALUSrcA, PCSource, // 1-bit control signals
    //     input clk,
    //     output [6:0] opcode // opcode is needed as an output by control
    // ); // the control inputs + clk

    initial begin 
        state = 1; 
    end // start the state machine in state 1
    
    // These are the definitions of the control signals
    assign MemoryOp = (opcode == LW) || (opcode == SW); // a memory operation
    assign ALUOp = ((state == 1) || (state == 2) || ((state == 3) && (MemoryOp || (opcode == ADDI)))) ? 
                        2'b00 : // add
                        ((state == 3) && (opcode == BEQ)) ? 2'b01 : 2'b10; // subtract or use function code
    assign MemtoReg = ((state == 4) && ((opcode == ALUop) || (opcode == ADDI))) ? 0 : 1;
    assign MemRead = (state == 1) || ((state == 4) && (opcode == LW));
    assign MemWrite = (state == 4) && (opcode == SW);
    assign IorD = (state == 1) ? 0 : 1;
    assign RegWrite = (state == 5) || ((state == 4) && ((opcode == ALUop) || (opcode == ADDI)));
    assign IRWrite = (state == 1);
    assign PCWrite = (state == 1);
    assign PCWriteCond = (state == 3) && (opcode == BEQ);
    assign ALUSrcA = ((state == 1) || (state == 2)) ? 0 : 1;
    // assign ALUSrcB = ((state == 1) || ((state == 3) && (opcode == BEQ))) ?
    //                     2'b01 :
    //                     (state == 2) ? 2'b11 :
    //                     ((state == 3) && MemoryOp) ? 2'b10 : 2'b00; // memory operation or other
    assign ALUSrcB = (state == 1) ? 2'b01 :
                        ((state == 2) || ((state == 3) && (MemoryOp || opcode == ADDI))) ? 2'b10 : 2'b00;

    assign PCSource = (state == 1) ? 0 : 1;
    
    // Here is the state machine, which only has to sequence states
    always @(posedge clk, reset) begin // all state updates on a positive clk, reset edge
        case (state)
            1: state <= 2; // unconditional next state
            2: state <= 3; // unconditional next state
            3: state <= (opcode == BEQ) ? 1 : 4; // branch go back else next state
            4: state <= (opcode == LW) ? 5 : 1; // R-type and LW finish
            5: state <= 1; // go back
        endcase
    end
endmodule
