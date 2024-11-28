The programmer-
visible state units (the PC, the memory, and the registers) as well as the IR will
need write control signals. The memory will also need a read signal. We can use the
ALU control unit from the single-cycle datapath (see Appendix B) to control
the ALU here as well.

---

The implementation of a finite-state machine usually assumes that
all outputs that are not explicitly asserted are deasserted. Similarly, the correct
operation of the datapath depends on the fact that a signal that is not explicitly
asserted is deasserted, rather than acting as a don’t care. For example, the RegWrite
signal should be asserted only when a register file entry is to be written; when it is
not explicitly asserted, it must be deasserted.

---

hus, in the finite-state machine, we always specify the
setting of all the multiplexor controls that we care about. When we implement the
finite-state machine with logic, setting a control to 0 may be the default and thus
may not require any gates. 

---

A finite-state machine can be implemented with a temporary register that
holds the current state and a block of combinational logic that determines both
the datapath signals to be asserted and the next state. Figure 4.39 shows how
such an implementation might look. Appendix B describes in detail how
the finite-state machine is implemented using this structure. In Section B.3,
the combinational control logic for the finite-state machine of Figure e4.5.12 is
implemented both with a ROM (read-only memory) and a PLA (programmable
logic array). (Also see Appendix A for a description of these logic elements.)
In the next section of this chapter, we consider another way to represent control.
Both of these techniques are simply different representations of the same control
information.

---
