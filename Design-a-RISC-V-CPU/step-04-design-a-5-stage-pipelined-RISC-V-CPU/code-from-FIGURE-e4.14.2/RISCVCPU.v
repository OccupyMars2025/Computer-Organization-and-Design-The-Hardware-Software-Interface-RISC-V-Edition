// FIGURE e4.14.2 A behavioral definition of the five-stage RISC-V pipeline with bypassing
// to ALU operations and address calculations. The code added to Figure e4.14.1 to handle bypassing is
// highlighted. Because these bypasses only require changing where the ALU inputs come from, the only changes
// required are in the combinational logic responsible for selecting the ALU inputs. (

// Implementing Forwarding in Verilog
// To extend the Verilog model further, Figure e4.14.2 shows the addition of forwarding
// logic for the case when the source and destination are ALU instructions. Neither
// load stalls nor branches are handled; we will add these shortly. The changes from
// the earlier Verilog description are highlighted

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
        // first instruction in the pipeline is being fetched
        // Fetch & increment PC
        IFIDIR <= IMemory[PC >> 2];
        PC <= PC + 4;

        // second instruction in pipeline is fetching registers
        IDEXA <= Regs[IFIDrs1]; IDEXB <= Regs[IFIDrs2];
        // if ((MEMWBop == LW) || (MEMWBop == R_type) || (MEMWBop == I_type)) begin
        //     if (MEMWBrd == IFIDrs1) begin
        //         IDEXA <= MEMWBValue;
        //     end
        //     else begin
        //         IDEXA <= Regs[IFIDrs1];
        //     end

        //     if (MEMWBrd == IFIDrs2) begin
        //         IDEXB <= MEMWBValue;
        //     end
        //     else begin
        //         IDEXB <= Regs[IFIDrs2];
        //     end
        // end

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
                        7'b000_0000: begin
                            EXMEMALUOut <= Ain + Bin; // ADD operation
                            /*
                                $display() seems to display the values that are 
                                before "<=" is executed !
                            */
                            $display("ADD operation, result(0x%h) = Ain(0x%h) + Bin(0x%h)", EXMEMALUOut, Ain, Bin);
                        end
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
