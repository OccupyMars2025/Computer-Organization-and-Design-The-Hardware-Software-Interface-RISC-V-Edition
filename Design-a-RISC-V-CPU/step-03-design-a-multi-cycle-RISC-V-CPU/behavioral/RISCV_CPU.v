// FIGURE e4.14.5 A behavioral specification of the multicycle RISC-V design. This has the
// same cycle behavior as the multicycle design, but is purely for simulation and specification. It cannot be used
// for synthesis.

module RISCV_CPU #(parameter BIT_WIDTH = 32) (input clk, reset);
    // Opcodes, 
    parameter LW = 7'b000_0011, 
              SW = 7'b010_0011, 
             BEQ = 7'b110_0011, 
          R_type = 7'b011_0011, // "R_type" refers to some R-type instructions
            ADDI = 7'b001_0011;  
    
    // The architecturally visible registers and scratch registers for implementation
    reg [BIT_WIDTH-1:0] PC, Regs[0:31], ALUOut, MDR, A, B;
    reg [BIT_WIDTH-1:0] Memory [0:1023], IR;

    /*
    FIGURE e4.5.6: actually these 5 states are the 5 "steps"
    */
    reg [2:0] state; // processor state

    wire [6:0] opcode; // use to get opcode easily
    wire [BIT_WIDTH-1:0] ImmGen; // used to generate immediate
    wire [BIT_WIDTH-1:0] PCOffset; // used to generate PC offset for branch
    
    assign opcode = IR[6:0]; // opcode is lower 7 bits
    assign ImmGen = ((opcode == LW) || (opcode == ADDI)) ? {{(BIT_WIDTH-11){IR[31]}}, IR[30:20]} :
        /* (opcode == SW) */{{(BIT_WIDTH-11){IR[31]}}, IR[30:25], IR[11:7]};

    // Caution: You must shift the immediate by 1 bit to the left
    assign PCOffset = {{(BIT_WIDTH-11-1){IR[31]}}, IR[7], IR[30:25], IR[11:8], 1'b0};
    
    integer i;
    initial begin
        // Initialize all memory locations to 0
        for (i = 0; i <= 1023; i = i + 1) begin
            Memory[i] = {BIT_WIDTH{1'b0}};
        end

        for (i = 0; i < 32; i = i + 1) begin
            Regs[i] = 0;
        end

        // set the PC to 0 and start the control in state 1
        PC = 0; state = 1; 

        // Load instructions into memory (overwrite with provided data)
        $readmemh("RISC-V-Assembly-Program/instructions.mem", Memory);
        for (i = 0; i < 16; i++) begin
            $display("Memory[%02d]: 0x%08h", i, Memory[i]);
        end
    end



    // Observe register contents on every negative clock edge
    always @(negedge clk) begin
        $display("Register contents at time %0t:", $time);
        for (i = 0; i < 32; i = i + 1) begin
            $display("x%02d: 0x%h", i, Regs[i]);
        end

        for (i = 0; i < 16; i++) begin
            $display("Memory[%02d]: 0x%08h", i, Memory[i]);
        end
        for (i = 97; i < 104; i++) begin
            $display("Memory[%02d]: 0x%08h", i, Memory[i]);
        end
    end

    always @(*) begin
        if (IR == 0) begin
            // Stop running on "no instruction"
            $display("no instruction at PC: 0x%08x", PC);
            $finish; // Stop simulation
        end
    end
    
    // The state machine--triggered on a rising clk
    always @(posedge clk) begin
        Regs[0] <= 0; // shortcut way to make sure R0 is always 0
        case (state) //action depends on the state
            1: begin // first step: fetch the instruction, increment PC, go to next state
                IR <= Memory[PC >> 2];
                PC <= PC + 4;
                state <= 2; // next state
            end

            2: begin // second step: Instruction decode, register fetch, also compute branch address
                A <= Regs[IR[19:15]];
                B <= Regs[IR[24:20]];
                ALUOut <= PC + PCOffset; // compute PC-relative branch target
                state <= 3;
            end

            3: begin // third step: Load-store(compute memory address to read or write), ALU execution, Branch completion
                if ((opcode == LW) || (opcode == SW)) begin
                    ALUOut <= A + ImmGen; // compute effective address
                    state <= 4;
                end
                else if (opcode == R_type) begin
                    case (IR[14:12]) // case for the various R-type instructions
                        3'b000: begin
                            if (IR[31:25] == 7'b000_0000) begin
                                ALUOut <= A + B; // add operation
                            end
                            else if (IR[31:25] == 7'b010_0000) begin
                                ALUOut <= A - B; // subtract operation
                            end
                            else begin  
                                // TODO: report an error for undefined instruction
                            end
                        end
                        default: ; // other R-type operations: subtract, SLT, etc.
                    endcase
                    state <= 4;
                end
                else if (opcode == BEQ) begin
                    if (A == B) begin
                        PC <= ALUOut; // branch taken--update PC
                    end
                    state <= 1;
                end
                else if (opcode == ADDI) begin
                    ALUOut <= A + ImmGen; // compute effective address
                    state <= 4;
                end
                else begin 
                    // TODO: other opcodes or exception for undefined instruction  would go here
                end
            end

            4: begin
                if ((opcode == R_type) || (opcode == ADDI)) begin // R-type instruction
                    Regs[IR[11:7]] <= ALUOut; // write the result
                    state <= 1;
                end // R-type completes
                else if (opcode == LW) begin // load instruction
                    MDR <= Memory[ALUOut >> 2]; // read the memory
                    state <= 5; // next state
                end
                else if (opcode == SW) begin // store instruction
                    Memory[ALUOut >> 2] <= B; // write the memory
                    state <= 1; // return to state 1
                end // SW completes
                else ; // TODO: other instructions go here
            end

            5: begin // LW is the only instruction still in execution
                Regs[IR[11:7]] <= MDR; // write the MDR to the register
                state <= 1;
            end // complete an LW instruction
        endcase
    end
endmodule