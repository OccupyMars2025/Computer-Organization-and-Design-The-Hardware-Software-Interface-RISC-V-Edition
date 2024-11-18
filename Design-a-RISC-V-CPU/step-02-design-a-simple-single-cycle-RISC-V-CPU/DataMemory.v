module DataMemory #(parameter ADDR_WIDTH = 32, DATA_WIDTH = 32)(
    input clk, mem_write, mem_read,
    input [ADDR_WIDTH-1:0] addr,
    input [DATA_WIDTH-1:0] write_data,
    output reg [DATA_WIDTH-1:0] read_data
);
    reg [DATA_WIDTH-1:0] memory [0:(1 << ADDR_WIDTH)-1];
    
    always @(posedge clk) begin
        if (mem_write)
            memory[addr] <= write_data;  // Write data on positive edge
    end
    
    always @(*) begin
        if (mem_read)
            read_data = memory[addr];
        else
            read_data = {DATA_WIDTH{1'b0}};
    end

    // Debug: Display the word value at address 0x0000101C at every negative clock edge
    always @(negedge clk) begin
        $display("At time %0t, Memory[0x0000101C]: 0x%08h", $time, memory[32'h0000101C >> 2]);
    end
endmodule
