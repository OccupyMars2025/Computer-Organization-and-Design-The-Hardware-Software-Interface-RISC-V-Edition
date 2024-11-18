module ControlUnit #(parameter DATA_WIDTH = 32)(
    input [6:0] opcode,
    output reg branch, mem_read, mem_to_reg,
    output reg [1:0] alu_op,
    output reg mem_write, 
    output reg alu_src_1, // select signal. Determine which is used as the first  operand of ALU. alu_src_1 = 0 will choose the "reg_read_data1" signal, alu_src_1 = 1 will choose the "pc" signal
    output reg alu_src_2, // select signal. Determine which is used as the second operand of ALU. alu_src_2 = 0 will choose the "reg_read_data2" signal, alu_src_2 = 1 will choose the "immediate" signal
    output reg reg_write
);
    always @(*) begin
        case (opcode)
            7'b0010011: begin  // ADDI
                branch = 0; mem_read = 0; mem_to_reg = 0; alu_op = 2'b00; mem_write = 0; alu_src_1 = 0; alu_src_2 = 1; reg_write = 1;
            end
            7'b0110011: begin  // ADD
                branch = 0; mem_read = 0; mem_to_reg = 0; alu_op = 2'b10; mem_write = 0; alu_src_1 = 0; alu_src_2 = 0; reg_write = 1;
            end
            7'b0010111: begin  // AUIPC
                branch = 0; mem_read = 0; mem_to_reg = 0; alu_op = 2'b00; mem_write = 0; alu_src_1 = 1; alu_src_2 = 1; reg_write = 1;
            end
            7'b0100011: begin  // SW, in sw instruction, we don't care the value of "mem_to_reg" signal
                branch = 0; mem_read = 0; mem_to_reg = 0; alu_op = 2'b00; mem_write = 1; alu_src_1 = 0; alu_src_2 = 1; reg_write = 0;
            end
            // Add other opcodes (e.g., lw, sw, R-type)
            default: begin  // TODO: the default values are all assigned casually
                branch = 0; mem_read = 0; mem_to_reg = 0; alu_op = 2'b00; mem_write = 1; alu_src_1 = 0; alu_src_2 = 1; reg_write = 0;
            end
        endcase
    end
endmodule
