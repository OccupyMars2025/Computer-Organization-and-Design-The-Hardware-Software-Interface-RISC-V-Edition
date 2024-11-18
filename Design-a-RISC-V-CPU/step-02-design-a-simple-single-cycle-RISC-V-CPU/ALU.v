module ALU #(parameter DATA_WIDTH = 32)(
    input [DATA_WIDTH-1:0] a, b,
    input [3:0] alu_control_lines,
    output reg [DATA_WIDTH-1:0] result,
    output zero
);
    always @(*) begin
        case (alu_control_lines)
            4'b0000: result = a & b;   // AND
            4'b0001: result = a | b;   // OR
            4'b0010: result = a + b;   // Addition
            4'b0110: result = a - b;   // Subtraction
            4'b0100: result = a ^ b;   // XOR
            default: result = {DATA_WIDTH{1'b0}};  // Default
        endcase
    end
    assign zero = (result == 0);
endmodule
