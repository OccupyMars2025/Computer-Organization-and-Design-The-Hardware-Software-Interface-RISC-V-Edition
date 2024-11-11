// Full adder module
module full_adder (
    input A, B, Cin,
    output Sum, Cout
);
    assign Sum = A ^ B ^ Cin;
    assign Cout = (A & B) | (Cin & (A ^ B));

    // assign {Cout, Sum} = A + B + Cin;
endmodule