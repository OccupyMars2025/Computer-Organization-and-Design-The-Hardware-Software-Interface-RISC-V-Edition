/*
FIGURE e4.14.1 A Verilog behavioral model for the RISC-V five-stage pipeline, ignoring
branch and data hazards. As in the design earlier in Chapter 4, we use separate instruction and data
memories, which would be implemented using separate caches as we describe in Chapter 5


Figure e4.14.1 shows a Verilog behavioral description of the pipeline that handles
ALU instructions as well as loads and stores. It does not accommodate branches
(even incorrectly!), which we postpone including until later in the chapter

ecause Verilog lacks the ability to define registers with named fields such as
structures in C, we use several independent registers for each pipeline register. We
name these registers with a prefix using the same convention; hence, IFIDIR is the
IR portion of the IFID pipeline register.

this version is a behavioral description not intended for synthesis. Instructions
take the same number of clock cycles as our hardware design, but the control
is done in a simpler fashion by repeatedly decoding fields of the instruction in
each pipe stage. Because of this difference, the instruction register (IR) is needed
throughout the pipeline, and the entire IR is passed from pipe stage to pipe stage.
As you read the Verilog descriptions in this chapter, remember that the actions
in the always block all occur in parallel on every clock cycle. Since there are no
blocking assignments, the order of the events within the always block is arbitrary.
*/

module RISCVCPU (
    input clk,
    input reset // reset is not used
);
    // Instruction opcodes
    parameter LW = 7'b000_0011, 
              SW = 7'b010_0011, 
             BEQ = 7'b110_0011, 
          R_type = 7'b011_0011,    // R-type instructions
          I_type = 7'b001_0011, 
             NOP = 32'h0000_0013;

    reg [31:0] PC, Regs[0:31], IDEXA, IDEXB, EXMEMB, EXMEMALUOut, MEMWBValue;
    reg [31:0] IMemory[0:1023], DMemory[0:1023]; // separate memories
    reg [31:0] IFIDIR, IDEXIR, EXMEMIR, MEMWBIR; // pipeline registers
    wire [4:0] IFIDrs1, IFIDrs2, MEMWBrd; // Access register fields
    wire [6:0] IDEXop, EXMEMop, MEMWBop; // Access opcodes
    wire [31:0] Ain, Bin; // the ALU inputs
    
    // These assignments define fields from the pipeline registers
    assign IFIDrs1 = IFIDIR[19:15]; // rs1 field
    assign IFIDrs2 = IFIDIR[24:20]; // rs2 field
    assign IDEXop = IDEXIR[6:0]; // the opcode
    assign EXMEMop = EXMEMIR[6:0]; // the opcode
    assign MEMWBop = MEMWBIR[6:0]; // the opcode
    assign MEMWBrd = MEMWBIR[11:7]; // rd field
    
    // Inputs to the ALU come directly from the ID/EX pipeline registers
    assign Ain = IDEXA;
    assign Bin = IDEXB;
    
    integer i; // used to initialize registers
    initial begin
        PC = 0;
        IFIDIR = NOP; IDEXIR = NOP; EXMEMIR = NOP; MEMWBIR = NOP; // put NOPs in pipeline registers
        for (i=0;i<=31;i=i+1) Regs[i] = 0; // initialize registers--just so they aren't cares
        for (i=0;i<=1023;i=i+1) begin // initialize instruction and data memories
            IMemory[i] = 0; DMemory[i] = 0;
        end

        $readmemh("RISC-V-Assembly-Program/instructions.mem", IMemory);
        for (i = 0; i < 16; i++) begin
            $display("IMemory[%02d]: 0x%08h", i, IMemory[i]);
        end
    end

    always @(negedge clk) begin
        $display("Register contents at time %0t:", $time);
        for (i = 0; i < 32; i = i + 1) begin
            $display("x%02d: 0x%h", i, Regs[i]);
        end

        for (i = 0; i < 16; i++) begin
            $display("IMemory[%02d]: 0x%08h", i, IMemory[i]);
        end
    end

    always @(*) begin
        if (IFIDIR == 0) begin
            // Stop running on "no instruction"
            $display("no instruction at PC: 0x%08h", PC);
            $finish; // Stop simulation
        end
    end

    // Remember that ALL these actions happen every pipe stage and with the use of <= they happen in parallel!
    always @(posedge clk) begin
        // first instruction in the pipeline is being fetched
        // Fetch & increment PC
        IFIDIR <= IMemory[PC >> 2];
        PC <= PC + 4;
        
        // second instruction in pipeline is fetching registers
        IDEXA <= Regs[IFIDrs1]; IDEXB <= Regs[IFIDrs2]; // get two registers
        IDEXIR <= IFIDIR; // pass along IR--can happen anywhere, since this affects next stage only!
        
        // third instruction is doing address calculation or ALU operation
        if (IDEXop == LW)
            EXMEMALUOut <= IDEXA + {{21{IDEXIR[31]}}, IDEXIR[30:20]};
        else if (IDEXop == SW)
            EXMEMALUOut <= IDEXA + {{21{IDEXIR[31]}}, IDEXIR[30:25],
                                IDEXIR[11:7]};
        else if (IDEXop == R_type) begin 
            case(IDEXIR[14:12]) // case for the various R-type instructions
                3'b000: begin
                    case(IDEXIR[31:25])
                        7'b000_0000: EXMEMALUOut <= Ain + Bin; // and operation
                        7'b010_0000: EXMEMALUOut <= Ain - Bin; // sub operation
                        default: begin
                            $display("Error: Invalid instruction %h", IDEXIR);
                            $finish;  // Stop the simulation
                        end
                    endcase 
                end
                default: begin // other R-type operations: subtract, SLT, etc.
                    $display("Not yet implemented");
                    $finish;  // Stop the simulation
                end
            endcase
        end
        else if (IDEXop == I_type) begin
            case(IDEXIR[14:12]) // case for the various I-type instructions
                3'b000: begin  // ADDI instruction
                    EXMEMALUOut <= Ain + {{21{IDEXIR[31]}}, IDEXIR[30:20]};
                end
                default: begin // other R-type operations: subtract, SLT, etc.
                    $display("Not yet implemented");
                    $finish;  // Stop the simulation
                end
            endcase
        end
        
        EXMEMIR <= IDEXIR; EXMEMB <= IDEXB; // pass along the IR & B register
        
        // Mem stage of pipeline
        if ((EXMEMop == R_type) || (EXMEMop == I_type)) MEMWBValue <= EXMEMALUOut; // pass along ALU result
        else if (EXMEMop == LW) MEMWBValue <= DMemory[EXMEMALUOut >> 2];
        else if (EXMEMop == SW) DMemory[EXMEMALUOut >> 2] <= EXMEMB; //store
        
        MEMWBIR <= EXMEMIR; // pass along IR
        
        // WB stage
        // update registers if (load or R-type or I-type) operation and destination not 0
        if (((MEMWBop == LW) || (MEMWBop == R_type) || (MEMWBop == I_type)) && (MEMWBrd != 0)) 
            Regs[MEMWBrd] <= MEMWBValue;
    end
endmodule
