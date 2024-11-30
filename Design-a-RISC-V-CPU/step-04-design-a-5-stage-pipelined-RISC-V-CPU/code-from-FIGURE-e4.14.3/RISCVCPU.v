/*
FIGURE e4.14.3 A behavioral definition of the five-stage RISC-V pipeline with stalls for
loads when the destination is an ALU instruction or effective address calculation. The
changes from Figure e4.14.2 are highlighted.


The Behavioral Verilog with Stall Detection
If we ignore branches, stalls for data hazards in the RISC-V pipeline are confined 
to one simple case, loads whose results are currently in the WB clock stage. 
Thus, extending the Verilog to handle a load with a destination that is 
    either an ALU instruction or an effective address calculation is
     reasonably straightforward, and Figure e4.14.3 shows the few additions needed.
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
    wire [4:0] IDEXrs1, IDEXrs2, EXMEMrd;
    wire [6:0] IDEXop, EXMEMop, MEMWBop; // Access opcodes
    wire [31:0] Ain, Bin; // the ALU inputs

    // declare the bypass signals
    wire bypassAfromMEM, bypassAfromALUinWB,
        bypassBfromMEM, bypassBfromALUinWB,
        bypassAfromLDinWB, bypassBfromLDinWB;
    wire stall; // stall signal
    assign IFIDrs1 = IFIDIR[19:15];
    assign IFIDrs2 = IFIDIR[24:20];
    assign IDEXop = IDEXIR[6:0];
    assign IDEXrs1 = IDEXIR[19:15];
    assign IDEXrs2 = IDEXIR[24:20];
    assign EXMEMop = EXMEMIR[6:0];
    assign EXMEMrd = EXMEMIR[11:7];
    assign MEMWBop = MEMWBIR[6:0];
    assign MEMWBrd = MEMWBIR[11:7];

    // The bypass to input A from the MEM stage for an ALU operation
    assign bypassAfromMEM = (IDEXrs1 == EXMEMrd) && (IDEXrs1 != 0) &&
                ((EXMEMop == R_type) || (EXMEMop == I_type));
    // The bypass to input B from the MEM stage for an ALU operation
    assign bypassBfromMEM = (IDEXrs2 == EXMEMrd) && (IDEXrs2 != 0) &&
                ((EXMEMop == R_type) || (EXMEMop == I_type));

    // The bypass to input A from the WB stage for an ALU operation
    assign bypassAfromALUinWB = (IDEXrs1 == MEMWBrd) && (IDEXrs1 != 0) &&
                ((MEMWBop == R_type) || (MEMWBop == I_type));
    // The bypass to input B from the WB stage for an ALU operation
    assign bypassBfromALUinWB = (IDEXrs2 == MEMWBrd) && (IDEXrs2 != 0) &&
                ((MEMWBop == R_type) || (MEMWBop == I_type));

    // The bypass to input A from the WB stage for an LW operation
    assign bypassAfromLDinWB = (IDEXrs1 == MEMWBrd) && (IDEXrs1 != 0) &&
                (MEMWBop == LW);
    // The bypass to input B from the WB stage for an LW operation
    assign bypassBfromLDinWB = (IDEXrs2 == MEMWBrd) && (IDEXrs2 != 0) &&
                (MEMWBop == LW);

    // The A input to the ALU is bypassed from MEM if there is a bypass there,
    // Otherwise from WB if there is a bypass there, 
    // and otherwise comes from the IDEX register
    assign Ain = bypassAfromMEM ? EXMEMALUOut :
                (bypassAfromALUinWB || bypassAfromLDinWB) ? MEMWBValue :
                    IDEXA;
    // The B input to the ALU is bypassed from MEM if there is a bypass there,
    // Otherwise from WB if there is a bypass there, 
    // and otherwise comes from the IDEX register
    assign Bin = bypassBfromMEM ? EXMEMALUOut :
                (bypassBfromALUinWB || bypassBfromLDinWB) ? MEMWBValue:
                    IDEXB;
    
    /*
    This is the original code from the textbook. But I think it's wrong.
    If you find the instruction to enter WB stage is a load, then the next instruction has completed the compuation with wrong input data
        and is ready to enter MEM stage, and it is too late to stall the pipeline.         
    */
    // assign stall = (MEMWBop == LW) && ( // source instruction is a load
    //     (((IDEXop == LW) || (IDEXop == SW)) && (IDEXrs1 == MEMWBrd)) || // stall for address calc
    //     ((IDEXop == R_type) && 
    //      ((IDEXrs1 == MEMWBrd) || (IDEXrs2 == MEMWBrd)))); // stall for ALU use
    

    // The signal for detecting a stall based on the use of a result from LW.
    // Detect the load-use data hazard in the EX/MEM pipeline register.
    assign stall = (EXMEMop == LW) && ( // source instruction is a load in EX/MEM stage
        (((IDEXop == LW) || (IDEXop == SW)) && (IDEXrs1 == EXMEMrd)) || // stall for next address calc
        ((IDEXop == R_type) && 
         ((IDEXrs1 == EXMEMrd) || (IDEXrs2 == EXMEMrd)))); // stall for next ALU use

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
        $display("=============================");
        for (i = 0; i < 10; i++) begin
            $display("DMemory[%02d]: 0x%08h", i, DMemory[i]);
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
        if (~stall) begin 
            // first instruction in the pipeline is being fetched
            // Fetch & increment PC
            IFIDIR <= IMemory[PC >> 2];
            PC <= PC + 4;

            // second instruction in pipeline is fetching registers
            IDEXA <= Regs[IFIDrs1]; IDEXB <= Regs[IFIDrs2];
            IDEXIR <= IFIDIR; // pass along IR--can happen anywhere, since this affects next stage only!
            
            // third instruction is doing address calculation or ALU operation
            if (IDEXop == LW)
                EXMEMALUOut <= Ain + {{21{IDEXIR[31]}}, IDEXIR[30:20]};
            else if (IDEXop == SW)
                EXMEMALUOut <= Ain + {{21{IDEXIR[31]}}, IDEXIR[30:25],
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
        end
        else begin 
            /*
            Freeze first three stages of pipeline; inject a nop into the EX output.
            The first three pipeline stages stall if there is a load-use data hazard.
            Because we don't change PC, all fields in the pipeline registers IF/ID and ID/EX,
            so we can "freeze" the first three stages of pipeline.
            */
            EXMEMIR <= NOP; 

            if (stall == 1)
                $display("==========================Stall detected at time %0t", $time);
        end
        
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