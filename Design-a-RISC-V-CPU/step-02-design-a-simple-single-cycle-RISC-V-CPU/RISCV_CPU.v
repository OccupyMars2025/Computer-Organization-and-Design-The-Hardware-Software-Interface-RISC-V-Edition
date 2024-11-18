module RISCV_CPU #(parameter DATA_WIDTH = 32)(
    input clk, reset
);
    // Wires for internal connections
    wire [DATA_WIDTH-1:0] reg_read_data1, reg_read_data2, reg_write_data, mem_read_data, first_operand_to_alu, second_operand_to_alu, pc, alu_result, instruction, immediate;
    wire zero, branch, mem_read, mem_write, reg_write, alu_src_1, alu_src_2, mem_to_reg;
    wire [1:0] alu_op;
    wire [3:0] alu_control_lines;

    // Just for debugging
    always @(negedge clk) begin
        $display("------------------------------------------------------------");
        $display("Time: %0t | CLK: %b | RESET: %b", $time, clk, reset);
        $display("PC:                  0x%08h", pc);
        $display("Instruction:         0x%08h", instruction);
        $display("Registers:");
        $display("  Read Data 1:       0x%08h", reg_read_data1);
        $display("  Read Data 2:       0x%08h", reg_read_data2);
        $display("  Write Data:        0x%08h", reg_write_data);
        $display("Immediate:           0x%08h", immediate);
        $display("ALU:");
        $display("  First Operand:     0x%08h", first_operand_to_alu);
        $display("  Second Operand:    0x%08h", second_operand_to_alu);
        $display("  ALU Result:        0x%08h", alu_result);
        $display("  Zero:              %b", zero);
        $display("Control Signals:");
        $display("  Branch:            %b", branch);
        $display("  MemRead:           %b", mem_read);
        $display("  MemWrite:          %b", mem_write);
        $display("  RegWrite:          %b", reg_write);
        $display("  MemToReg:          %b", mem_to_reg);
        $display("  ALUSrc_1:          %b", alu_src_1);
        $display("  ALUSrc_2:          %b", alu_src_2);
        $display("ALU Control:");
        $display("  ALU Op:            %b", alu_op);
        $display("  ALU Control Lines: %b", alu_control_lines);
        $display("------------------------------------------------------------\n");
    end
    
    

    // Instantiate modules
    ProgramCounter #(DATA_WIDTH) pc_inst(  // #(parameter ADDR_WIDTH = 32)
        .clk(clk), 
        .reset(reset),
        .immediate(immediate),   // input [ADDR_WIDTH-1:0]  
        .branch(branch),         // input 
        .zero(zero),             // input 
        .pc(pc)                  // output [ADDR_WIDTH-1:0] 
    );

    InstructionMemory #(10, DATA_WIDTH) im_inst( // #(parameter ADDR_WIDTH = 10, DATA_WIDTH = 32)
        .addr(pc[11:2]),              //  input [ADDR_WIDTH-1:0] 
        .instruction(instruction)     //  output reg [DATA_WIDTH-1:0]
    );

    ControlUnit #(DATA_WIDTH) control_inst(
        .opcode(instruction[6:0]),   // input [6:0] 
        .branch(branch),             // output 
        .mem_read(mem_read),         // output 
        .mem_to_reg(mem_to_reg),     // output 
        .alu_op(alu_op),             // output reg [1:0] 
        .mem_write(mem_write),       // output 
        .alu_src_1(alu_src_1),       // output 
        .alu_src_2(alu_src_2),       // output 
        .reg_write(reg_write)        // output 
    );
    
    RegisterFile #(DATA_WIDTH, 32) rf_inst( // #(parameter DATA_WIDTH = 32, REG_COUNT = 32)
        .clk(clk),                         // input  
        .reg_write(reg_write),             // input 
        .read_reg1(instruction[19:15]),    // input [$clog2(REG_COUNT)-1:0]
        .read_reg2(instruction[24:20]),    // input [$clog2(REG_COUNT)-1:0]
        .write_reg(instruction[11:7]),     // input [$clog2(REG_COUNT)-1:0]
        .write_data(reg_write_data),       // input [DATA_WIDTH-1:0]
        .read_data1(reg_read_data1),       // output [DATA_WIDTH-1:0]
        .read_data2(reg_read_data2)        // output [DATA_WIDTH-1:0] 
    );

    Mux2to1 #(DATA_WIDTH) choose_first_operand_to_alu(
        .in0(reg_read_data1),     // input [DATA_WIDTH-1:0]
        .in1(pc),                 // input [DATA_WIDTH-1:0] 
        .sel(alu_src_1),          // Select signal
        .out(first_operand_to_alu) // output [DATA_WIDTH-1:0] 
    );

    Mux2to1 #(DATA_WIDTH) choose_second_operand_to_alu(
        .in0(reg_read_data2),   // input [DATA_WIDTH-1:0]
        .in1(immediate),        // input [DATA_WIDTH-1:0] 
        .sel(alu_src_2),          // Select signal
        .out(second_operand_to_alu) // output [DATA_WIDTH-1:0] 
    );

    ImmGen #(DATA_WIDTH) imm_inst(
        .instruction(instruction), // input [DATA_WIDTH-1:0] 
        .immediate(immediate)       // output reg [DATA_WIDTH-1:0] 
    );

    ALUControl alu_control_inst(
        .alu_op(alu_op),                       // 2-bit control from the main control unit, input [1:0]
        .funct3(instruction[14:12]),           // 3-bit funct3 field from the instruction,  input [2:0] 
        .funct7(instruction[31:25]),           // 7-bit funct7 field from the instruction,  input [6:0] 
        .alu_control_lines(alu_control_lines)  // 4-bit ALU control signal to the ALU,      output reg [3:0] 
    );


    ALU #(DATA_WIDTH) alu_inst(
        .a(first_operand_to_alu),             // input [DATA_WIDTH-1:0]
        .b(second_operand_to_alu),            // input [DATA_WIDTH-1:0] 
        .alu_control_lines(alu_control_lines),  // input [3:0] 
        .result(alu_result),            // output [DATA_WIDTH-1:0]
        .zero(zero)                     // output 
    );

    DataMemory #(11, DATA_WIDTH) dm_inst(  // #(parameter ADDR_WIDTH = 32, DATA_WIDTH = 32)
        .clk(clk), 
        .mem_write(mem_write),        // input 
        .mem_read(mem_read),          // input 
        .addr(alu_result[12:2]),      // input [ADDR_WIDTH-1:0] 
        .write_data(reg_read_data2),  // input [DATA_WIDTH-1:0] 
        .read_data(mem_read_data)     // output reg [DATA_WIDTH-1:0] 
    );

    Mux2to1 #(DATA_WIDTH) choose_which_to_write_back_to_regfile(
        .in0(alu_result),      // input [DATA_WIDTH-1:0]
        .in1(mem_read_data),   // input [DATA_WIDTH-1:0] 
        .sel(mem_to_reg),      // Select signal
        .out(reg_write_data)   // output [DATA_WIDTH-1:0] 
    );
endmodule
