// reg [63:0] A;
// wire [63:0] b;
// always @(posedge clock) A <= b;

module registerfile (Read1, Read2, WriteReg, WriteData, RegWrite,
    Data1, Data2, clock);

    input [5:0] Read1, Read2, WriteReg; // the register numbers to read or write
    input [63:0] WriteData; // data to write.
    input RegWrite; // the write control
    input clock; // the clock to trigger write
    output [63:0] Data1, Data2; // the register values read
    
    reg [63:0] RF [31:0]; // 32 registers each 32 bits long
    
    assign Data1 = RF[Read1];
    assign Data2 = RF[Read2];

    always @(posedge clock) begin
        // write the register with new value if Regwrite is high
        if (RegWrite) 
            RF[WriteReg] <= WriteData;
    end
endmodule