module Mult2to1 (
    input [31:0] In1, In2, //two 32-bit inputs 
    input Sel, //selector signal
    output reg [31:0] Out // 32-bit output
);
    always @(In1, In2, Sel) begin 
        case (Sel) // a 2->1 multiplexor
            0: Out <= In1;
            default: Out <= In2;
        endcase 
    end
endmodule
