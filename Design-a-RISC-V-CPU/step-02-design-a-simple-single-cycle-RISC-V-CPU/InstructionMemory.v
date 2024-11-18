module InstructionMemory #(parameter ADDR_WIDTH = 10, DATA_WIDTH = 32)(
    input [ADDR_WIDTH-1:0] addr,
    output reg [DATA_WIDTH-1:0] instruction
);
    reg [DATA_WIDTH-1:0] memory [0:(1 << ADDR_WIDTH)-1];  // Memory array

    integer i;

    initial begin
        // Initialize all memory locations to 0
        for (i = 0; i < (1 << ADDR_WIDTH); i = i + 1) begin
            memory[i] = {DATA_WIDTH{1'b0}};
        end

        // Load instructions into memory (overwrite with provided data)
        $readmemh("RISC-V-Assembly-Program/instructions.mem", memory);
    end

    always @(*) begin
        instruction = memory[addr];
    end
endmodule
