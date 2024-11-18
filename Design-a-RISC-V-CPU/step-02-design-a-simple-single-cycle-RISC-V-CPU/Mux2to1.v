module Mux2to1 #(parameter DATA_WIDTH = 32)(
    input [DATA_WIDTH-1:0] in0,   // Input 0
    input [DATA_WIDTH-1:0] in1,   // Input 1
    input sel,               // Select signal
    output [DATA_WIDTH-1:0] out // Output
);
    assign out = (sel == 1'b0) ? in0 : in1; // Continuous assignment
endmodule
