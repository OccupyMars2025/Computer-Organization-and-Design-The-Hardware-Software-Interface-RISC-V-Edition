// FIGURE A.8.11 A RISC-V register file written in behavioral Verilog. This register file writes on the rising clk edge.

module RegisterFile (
    input [4:0] Read1, Read2, WriteReg, // the register numbers to read or write
    input [31:0] WriteData, // data to write
    input RegWrite, // the write control
    input clk, // the clk to trigger write
    output [31:0] Data1, Data2 // the register values read 
);
    reg [31:0] RF [0:31]; // 32 registers each 32 bits long

    integer i;
    initial begin
        for (i = 0; i < 32; i = i + 1) begin
            RF[i] = 0;
        end
    end

    always @(negedge clk) begin
        $display("Register contents at time %0t:", $time);
        for (i = 0; i < 32; i = i + 1) begin
            $display("x%02d: 0x%h", i, RF[i]);
        end
    end


    assign Data1 = RF[Read1];
    assign Data2 = RF[Read2];
    always @(posedge clk) begin
        // write the register with new value if Regwrite is high
        // if (RegWrite) RF[WriteReg] <= WriteData;
        if (RegWrite && (WriteReg != 5'b00000)) begin
            RF[WriteReg] <= WriteData;
        end
    end

    
endmodule