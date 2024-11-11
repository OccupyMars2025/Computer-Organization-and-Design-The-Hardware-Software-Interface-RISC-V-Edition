module alu (
    input  wire [63:0] a,           // First operand
    input  wire [63:0] b,           // Second operand
    input  wire [3:0]  alu_control, // ALU control signal
    output reg  [63:0] result,      // ALU result
    output wire        zero         // Zero flag for branching
);

    // ALU control signal encoding
    localparam ALU_ADD  = 4'b0000; // Addition
    localparam ALU_SUB  = 4'b0001; // Subtraction
    localparam ALU_AND  = 4'b0010; // Bitwise AND
    localparam ALU_OR   = 4'b0011; // Bitwise OR
    localparam ALU_XOR  = 4'b0100; // Bitwise XOR
    localparam ALU_SLL  = 4'b0101; // Logical shift left
    localparam ALU_SRL  = 4'b0110; // Logical shift right
    localparam ALU_SRA  = 4'b0111; // Arithmetic shift right

    assign zero = (result == 64'b0); // Zero flag for branching

    always @(*) begin
        case (alu_control)
            ALU_ADD:  result = a + b;               // Addition
            ALU_SUB:  result = a - b;               // Subtraction
            ALU_AND:  result = a & b;               // Bitwise AND
            ALU_OR:   result = a | b;               // Bitwise OR
            ALU_XOR:  result = a ^ b;               // Bitwise XOR
            ALU_SLL:  result = a << b[5:0];         // Logical shift left
            ALU_SRL:  result = a >> b[5:0];         // Logical shift right
            ALU_SRA:  result = a >>> b[5:0];        // Arithmetic shift right
            default:  result = 64'b0;               // Default to 0
        endcase
    end

endmodule
