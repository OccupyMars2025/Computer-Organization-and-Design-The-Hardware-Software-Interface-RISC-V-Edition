module ProgramCounter #(parameter ADDR_WIDTH = 32)(
    input clk, reset,
    input [ADDR_WIDTH-1:0] immediate, 
    input branch, zero,
    output reg [ADDR_WIDTH-1:0] pc
);
    wire [ADDR_WIDTH-1:0] pc_plus_4 = pc + 4;          // Sequential PC increment
    wire [ADDR_WIDTH-1:0] branch_target = pc + immediate; // Branch target address

    // Control signals
    wire branch_taken = branch & zero; // Branch condition satisfied

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            pc <= {ADDR_WIDTH{1'b0}}; // Reset to the initial address
        end else begin
            pc <= branch_taken ? branch_target : pc_plus_4; // Select next PC value
        end
    end
endmodule
