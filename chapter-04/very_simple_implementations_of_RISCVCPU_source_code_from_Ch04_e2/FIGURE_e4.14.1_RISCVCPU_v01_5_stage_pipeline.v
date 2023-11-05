/* 2023/11/2 8:00
https://www.elsevier.com/__data/assets/pdf_file/0005/1129073/Ch04_e2.pdf

FIGURE e4.14.1 A Verilog behavioral model for the RISC-V five-stage pipeline, ignoring
branch and data hazards.

use the following website to plot the pipeline
https://app.diagrams.net/
*/

module RISCVCPU_v01 (input clock);
// module top (input clock);
    /*
    nop(No operation): addi x0, x0, 0
    */
    // Instruction opcodes
    // the "ALUop" refers to R-type ALU instruction
    parameter LW = 7'b000_0011, SW = 7'b010_0011, /*BEQ = 7'b110_0011,*/ NOP = 32'h0000_0013, ALUop = 7'b011_0011;

    reg [31:0] PC, Regs[0:31], IDEXA, IDEXB, EXMEMB, EXMEMALUOut, MEMWBValue;
    /* verilator lint_off UNDRIVEN */
    reg [31:0] IMemory[0:1023], DMemory[0:1023]; // separate memories
    /* verilator lint_on UNDRIVEN */
    /* verilator lint_off UNUSEDSIGNAL */
    reg [31:0] IFIDIR, IDEXIR, EXMEMIR, MEMWBIR; // pipeline registers
    /* verilator lint_on UNUSEDSIGNAL */
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
        for (i=0;i<=31;i=i+1) Regs[i] = i; // initialize registers--just so they aren't cares
    end

    initial begin
        if ($test$plusargs("trace") != 0) begin
            $display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
            $dumpfile("logs/vlt_dump.vcd");
            $dumpvars();
        end
        $display("[%0t] Model running...\n", $time);
    end

    // Remember that ALL these actions happen every pipe stage and with the use of <= they happen in parallel!
    always @(posedge clock) begin
        $display("[time = %0t]\n", $time);

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
            EXMEMALUOut <= IDEXA + {{21{IDEXIR[31]}}, IDEXIR [30:25], IDEXIR[11:7]};
        else if (IDEXop == ALUop)
            case (IDEXIR[31:25]) // for the various R-type instructions
                0: EXMEMALUOut <= Ain + Bin; // add operation

                default: ; // other R-type operations: subtract, SLT, etc.
            endcase
        EXMEMIR <= IDEXIR; EXMEMB <= IDEXB; // pass along the IR & B register
        
        // Mem stage of pipeline
        if (EXMEMop == ALUop) MEMWBValue <= EXMEMALUOut; // pass along ALU result
        else if (EXMEMop == LW) MEMWBValue <= DMemory[EXMEMALUOut >> 2];
        else if (EXMEMop == SW) DMemory[EXMEMALUOut >> 2] <= EXMEMB; //store
        MEMWBIR <= EXMEMIR; // pass along IR
        
        // WB stage
        // update registers if load/ALU operation and destination not 0
        if (((MEMWBop == LW) || (MEMWBop == ALUop)) && (MEMWBrd != 0)) 
            Regs[MEMWBrd] <= MEMWBValue;

        if ((PC>>2) > 20) begin
            // This write is a magic value the Makefile uses to make sure the
            // test completes successfully.
            $write("*-* All Finished *-*\n");
            $finish;
        end
    end
endmodule
