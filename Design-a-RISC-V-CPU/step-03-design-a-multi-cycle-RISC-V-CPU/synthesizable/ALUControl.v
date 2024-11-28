// FIGURE A.5.16 The RISC-V ALU control: a simple piece of combinational control logic.

module ALUControl (
    input [1:0] ALUOp,
    input [6:0] Func7,
    input [2:0] Func3,
    output [3:0] ALUCtl  // Keep ALUCtl as wire
);
    // Use a continuous assignment to drive ALUCtl based on the inputs
    assign ALUCtl = (ALUOp == 2'b00) ? 2 :   // ADD
                    (ALUOp == 2'b01) ? 6 :   // SUB
                    (ALUOp == 2'b10) ? 
                        (Func3 == 3'b000) ? 
                            (Func7 == 7'b000_0000) ? 2 :  // ADD
                            (Func7 == 7'b010_0000) ? 6 :  // SUB
                            15 :  // Default
                        (Func3 == 3'b111) ? 0 :   // AND
                        (Func3 == 3'b110) ? 1 :   // OR
                        (Func3 == 3'b010) ? 7 :   // SLT
                        (Func3 == 3'b100) ? 12 :  // XOR
                        15 :  // Default
                    15;  // Default for ALUOp != 2'b00, 2'b01, 2'b10
endmodule
