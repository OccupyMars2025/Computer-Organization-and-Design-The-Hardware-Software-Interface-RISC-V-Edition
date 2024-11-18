module RegisterFile #(parameter DATA_WIDTH = 32, REG_COUNT = 32)(
    input clk, reg_write,
    input [$clog2(REG_COUNT)-1:0] read_reg1, read_reg2, write_reg,
    input [DATA_WIDTH-1:0] write_data,
    output [DATA_WIDTH-1:0] read_data1, read_data2
);
    reg [DATA_WIDTH-1:0] registers [0:REG_COUNT-1];

    // Ensure x0 (register[0]) always reads as 0
    assign read_data1 = (read_reg1 == 0) ? 0 : registers[read_reg1];
    assign read_data2 = (read_reg2 == 0) ? 0 : registers[read_reg2];

    always @(posedge clk) begin
        if (reg_write && (write_reg != 0))  // Prevent writes to x0
            registers[write_reg] <= write_data;
    end

    // Optional initialization of all registers to 0
    integer i;
    initial begin
        for (i = 0; i < REG_COUNT; i = i + 1) begin
            registers[i] = 0;
        end
    end

    // Observe register contents on every negative clock edge
    always @(negedge clk) begin
        $display("Register contents at time %0t:", $time);
        for (i = 0; i < REG_COUNT; i = i + 1) begin
            $display("x%02d: 0x%h", i, registers[i]);
        end
    end
endmodule
