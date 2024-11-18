module ImmGen #(parameter DATA_WIDTH = 32)(
    input [DATA_WIDTH-1:0] instruction,
    output reg [DATA_WIDTH-1:0] immediate
);
    always @(*) begin
        case (instruction[6:0])  // Opcode-based decoding
            7'b0010011: immediate = {{DATA_WIDTH-12{instruction[31]}}, instruction[31:20]};  // I-type: ADDI
            7'b0010111: immediate = {instruction[31:12], 12'b0};  // AUIPC
            7'b0100011: immediate = {{DATA_WIDTH-12{instruction[31]}}, instruction[31:25], instruction[11:7]};  // S-type: SW
            // 7'b1100011: immediate = {{DATA_WIDTH-13{instruction[31]}}, instruction[31], instruction[7], instruction[30:25], instruction[11:8], 1'b0};  // B-type
            default: immediate = {DATA_WIDTH{1'b0}};  // Default
        endcase
    end
endmodule
