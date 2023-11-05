module ALUControl (ALUOp, FuncCode, ALUCtl);
    input [1:0] ALUOp;
    input [5:0] FuncCode;
    output [3:0] reg ALUCtl;
    always case (FuncCode)
        32: ALUCtl<=2; // add
        34: ALUCtl<=6; // subtract
        36: ALUCtl<=0; // and
        37: ALUCtl<=1; // or
        39: ALUCtl<=12; // nor
        42: ALUCtl<=7; // slt
        default: ALUCtl<=15; // should not happen.
    endcase
endmodule