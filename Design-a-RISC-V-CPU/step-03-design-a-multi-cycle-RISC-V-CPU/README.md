## the implementation is copied from "Section 4.14 Advanced Topic: An Introduction to Digital Design Using a Hardware Design Language"

### Figure e4.14.5 shows a behavioral specification of the RISC-V processor. 
## Figure e4.14.6 shows the structural version of the RISC-V datapath.Figure e4.14.7 uses the datapath module to specify the RISC-V CPU. 

To illustrate the
dichotomy between behavioral and synthesizable designs, we then give two Verilog
descriptions of a multiple-cycle-per-instruction RISC-V processor: one intended
solely for simulations and one suitable for synthesis.

---

Figure e4.14.5 gives a behavioral specification of a multicycle implementation
of the RISC-V processor. Because of the use of behavioral operations, it would be
difficult to synthesize a separate datapath and control unit with any reasonable
efficiency. This version demonstrates another approach to the control by using a
Mealy finite-state machine (see discussion in Section A.10 of Appendix A). The
use of a Mealy machine, which allows the output to depend both on inputs and the
current state, allows us to decrease the total number of states


---

Since a version of the RISC-V design intended for synthesis is considerably
more complex, we have relied on a number of Verilog modules that were specified
in Appendix A, including the following:
■ The 4-to-1 multiplexor shown in Figure A.4.2, and the 2-to-1 multiplexor
that can be trivially derived based on the 4-to-1 multiplexor.
■ The RISC-V ALU shown in Figure A.5.15.
■ The RISC-V ALU control defined in Figure A.5.16.
■ The RISC-V register file defined in Figure A.8.11.