// FIGURE A.5.15 A Verilog behavioral definition of a RISC-V ALU.

module RISCVALU (
    input [3:0] ALUCtl,
    input [31:0] A, B,
    output reg [31:0] ALUOut,
    output Zero
);
    assign Zero = (ALUOut==0); //Zero is true if ALUOut is 0 
    always @(ALUCtl, A, B) begin // reevaluate if these change 
        case (ALUCtl)
            0: ALUOut <= A & B;
            1: ALUOut <= A | B;
            2: ALUOut <= A + B;
            6: ALUOut <= A - B;
            7: ALUOut <= A < B ? 1 : 0;
            // 12: ALUOut <= ~(A | B); // result is nor 
            12: ALUOut <= A ^ B; // XOR
            default: ALUOut <= 0;
        endcase
    end
endmodule