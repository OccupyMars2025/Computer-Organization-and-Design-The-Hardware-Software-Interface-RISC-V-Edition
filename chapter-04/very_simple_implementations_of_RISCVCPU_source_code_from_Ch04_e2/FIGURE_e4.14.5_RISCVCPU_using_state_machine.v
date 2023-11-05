/* 2023/11/4 10:37

FIGURE e4.14.5 A behavioral specification of the multicycle RISC-V design. This has the
same cycle behavior as the multicycle design, but is purely for simulation and specification. It cannot be used
for synthesis.

*/

module RISCVCPU_v05 (clock);
// module top (clock);
    parameter LW = 7'b000_0011, SW = 7'b010_0011, BEQ = 7'b110_0011, ALUop = 7'b001_0011;
    input clock; //the clock is an external input
    
    initial begin
        if ($test$plusargs("trace") != 0) begin
            $display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
            $dumpfile("logs/vlt_dump.vcd");
            $dumpvars();
        end
        $display("[%0t] Model running...\n", $time);
    end

    // The architecturally visible registers and scratch registers for implementation
    reg [31:0] PC, Regs[0:31], ALUOut, MDR, A, B;
    /* verilator lint_off UNUSEDSIGNAL */
    reg [31:0] Memory [0:1023], IR;
    /* verilator lint_on UNUSEDSIGNAL */
    reg [2:0] state; // processor state
    wire [6:0] opcode; // use to get opcode easily
    wire [31:0] ImmGen; // used to generate immediate
    wire [31:0] PCOffset; // PC-relative offset for beq
    
    assign opcode = IR[6:0]; // opcode is lower 7 bits
    assign ImmGen = (opcode == LW) ? {{21{IR[31]}}, IR[30:20]} :
                  /*(opcode == SW)*/ {{21{IR[31]}}, IR[30:25], IR[11:7]};
    assign PCOffset = {{20{IR[31]}}, IR[7], IR[30:25], IR[11:8], 1'b0};
    
    // set the PC to 0 and start the control in state 1
    initial begin 
        PC = 0; state = 1; 
    end
    
    // The state machine--triggered on a rising clock
    always @(posedge clock) begin
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

            3: begin // third step: Load-store execution, ALU execution, Branch completion
                if ((opcode == LW) || (opcode == SW)) begin
                    ALUOut <= A + ImmGen; // compute effective address
                    state <= 4;
                end
                else if (opcode == ALUop) begin
                    case (IR[31:25]) // case for the various R-type instructions
                        0: ALUOut <= A + B; // add operation
                        default: ; // other R-type operations: subtract, SLT, etc.
                    endcase
                    state <= 4;
                end
                else if (opcode == BEQ) begin
                    if (A == B) begin
                        PC  <= ALUOut; // branch taken--update PC
                    end
                    state <= 1;
                end
                else ; // other opcodes or exception for undefined instruction would go here
            end
            
            4: begin
                if (opcode == ALUop) begin // ALU Operation
                    Regs[IR[11:7]] <= ALUOut; // write the result
                    state <= 1;
                end // R-type finishes
                else if (opcode == LW) begin // load instruction
                    MDR <= Memory[ALUOut >> 2]; // read the memory
                    state <= 5; // next state
                end
                else if (opcode == SW) begin // store instruction
                    Memory[ALUOut >> 2] <= B; // write the memory
                    state <= 1; // return to state 1
                end
                else ; // other instructions go here
            end
                
            5: begin // LW is the only instruction still in execution
                Regs[IR[11:7]] <= MDR; // write the MDR to the register
                state <= 1;
            end // complete an LW instruction
        endcase

        if ($time > 20) begin
            // This write is a magic value the Makefile uses to make sure the
            // test completes successfully.
            $write("*-* All Finished *-*\n");
            $finish;
        end
    end
endmodule
