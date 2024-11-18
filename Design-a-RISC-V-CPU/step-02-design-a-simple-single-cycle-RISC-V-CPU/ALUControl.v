module ALUControl(
    input [1:0] alu_op,          // 2-bit control from the main control unit
    input [2:0] funct3,          // 3-bit funct3 field from the instruction
    input [6:0] funct7,          // 7-bit funct7 field from the instruction
    output reg [3:0] alu_control_lines  // 4-bit ALU control signal to the ALU
);
    always @(*) begin
        case (alu_op)
            2'b00: begin
                // alu_op = 00: Load/Store (always ADD), AUIPC 
                alu_control_lines = 4'b0010; // ALU will "add"
            end
            2'b01: begin
                // alu_op = 01: Branch operations (subtract for comparison)
                alu_control_lines = 4'b0110; // SUB
            end
            2'b10: begin
                // alu_op = 10: R-type and I-type operations
                case (funct3)
                    3'b000: begin
                        case (funct7)
                            7'b0000000: alu_control_lines = 4'b0010; // ADD
                            7'b0100000: alu_control_lines = 4'b0110; // SUB
                            default: alu_control_lines = 4'b1111; // TODO 
                        endcase
                    end
                    3'b111: alu_control_lines = 4'b0000; // AND
                    3'b110: alu_control_lines = 4'b0001; // OR
                    3'b100: alu_control_lines = 4'b0011; // XOR
                    3'b001: alu_control_lines = 4'b0100; // SLL (Shift Left Logical)
                    3'b101: begin
                        if (funct7 == 7'b0100000)
                            alu_control_lines = 4'b0101; // SRA (Shift Right Arithmetic)
                        else
                            alu_control_lines = 4'b0111; // SRL (Shift Right Logical)
                    end
                    default: alu_control_lines = 4'b1111; // NOP or invalid case
                endcase
            end
            default: alu_control_lines = 4'b1111; // NOP or invalid case
        endcase
    end
endmodule
