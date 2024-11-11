module ripple_carry_adder #(parameter WIDTH = 8) (
    input wire [WIDTH-1:0] A,      // First operand
    input wire [WIDTH-1:0] B,      // Second operand
    input wire Cin,                // Initial carry-in
    output wire [WIDTH-1:0] Sum,   // Sum output
    output wire Cout               // Carry-out from the most significant bit
);

    wire [WIDTH:0] carry;          // Internal carry chain
    assign carry[0] = Cin;         // Initial carry

    // Generate ripple-carry adders for each bit
    genvar i;
    generate
        for (i = 0; i < WIDTH; i = i + 1) begin : full_adder_chain
            full_adder fa (
                .A(A[i]),
                .B(B[i]),
                .Cin(carry[i]),
                .Sum(Sum[i]),
                .Cout(carry[i+1])
            );
        end
    endgenerate

    assign Cout = carry[WIDTH];    // Final carry-out

endmodule
