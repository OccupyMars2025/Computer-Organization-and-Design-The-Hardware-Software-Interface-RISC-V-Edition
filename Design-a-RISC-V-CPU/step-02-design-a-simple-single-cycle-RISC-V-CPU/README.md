# In this folder, enter "make" to run the simulation. This very simple single-cycle RISC-V CPU executes instructions from Design-a-RISC-V-CPU/step-02-design-a-simple-single-cycle-RISC-V-CPU/RISC-V-Assembly-Program/test.s

---

## Caution: (Major modification based on Figure 4.25) To execute the "auipc" instruction, I add some logic to select between "pc" and "reg_read_data1" as the first operand of the ALU. So I modify the ControlUnit module and add a Mux2to1 in the RISCV_CPU module.

---



## Caution: "beq x1, x2, offset", The architecture also states that the offset field is shifted left 1 bit so that it is a half word offset; this shift increases the effective range of the offset field by a factor of 2.
## using the ALU we designed in Appendix A
## The branch instruction operates by adding the PC with the 12 bits of the instruction shifted left by 1 bit. Simply concatenating 0 to the branch offset accomplishes this shift,

---

page 265: This simplest datapath will attempt to execute
all instructions in one clock cycle. Thus, that no datapath resource can be used
more than once per instruction, so any element needed more than once must be
duplicated. We therefore need a memory for instructions separate from one for
data. Although some of the functional units will need to be duplicated, many of the
elements can be shared by different instruction flows.

---

The single-cycle datapath conceptually described in this section must have
separate instruction and data memories, because: 
the processor operates in one clock cycle and cannot use a (single-
ported) memory for two different accesses within that clock cycle.

---

Now that we have completed this simple datapath, we can add the control unit.
The control unit must be able to take inputs and generate a write signal for each
state element, the selector control for each multiplexor, and the ALU control. The
ALU control is different in a number of ways, and it will be useful to design it first
before we design the rest of the control unit

---

The immediate generation logic must choose between sign-extending
a 12-bit field in instruction bits 31:20 for load instructions, bits 31:25 and 11:7 for
store instructions, or bits 31, 7, 30:25, and 11:8 for the conditional branch. Since
the input is all 32 bits of the instruction, it can use the opcode bits of the instruction
to select the proper field. RISC-V opcode bit 6 happens to be 0 for data transfer
instructions and 1 for conditional branches, and RISC-V opcode bit 5 happens to be 0
for load instructions and 1 for store instructions. Thus, bits 5 and 6 can control a 3:1
multiplexor inside the immediate generation logic that selects the appropriate 12-bit
field for load, store, and conditional branch instructions.

---


e build this simple implementation using the datapath of
the last section and adding a simple control function. This simple implementation
covers load word (lw), store word (sw), branch if equal (beq), and the arithmetic-
logical instructions add, sub, and, and or.


---


 a 2-bit control field,
which we call ALUOp. ALUOp indicates whether the operation to be performed
should be add (00) for loads and stores, subtract and test if zero (01) for beq, or
be determined by the operation encoded in the funct7 and funct3 fields (10). The
output of the ALU control unit is a 4-bit signal that directly controls the ALU by
generating one of the 4-bit combinations shown previously

---


We show this final step in Section C.2 in Appendix C.

---



