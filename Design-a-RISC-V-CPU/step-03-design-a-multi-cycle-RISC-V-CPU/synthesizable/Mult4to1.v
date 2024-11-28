// FIGURE A.4.2 A Verilog definition of a 4-to-1 multiplexor with 32-bit inputs, using a case statement. 
// The case statement acts like a C Switch statement, except that in Verilog only the code associated with 
// the selected case is executed (as if each case state had a break at the end) and there is no fall-through to the next statement.


module Mult4to1 (
    input [31:0] In1, In2, In3, In4, //four 32-bit inputs 
    input [1:0] Sel, //selector signal
    output reg [31:0] Out // 32-bit output
);
    always @(In1, In2, In3, In4, Sel) begin 
        case (Sel) // a 4->1 multiplexor
            0: Out <= In1;
            1: Out <= In2;
            2: Out <= In3;
            default: Out <= In4;
        endcase 
    end
endmodule
