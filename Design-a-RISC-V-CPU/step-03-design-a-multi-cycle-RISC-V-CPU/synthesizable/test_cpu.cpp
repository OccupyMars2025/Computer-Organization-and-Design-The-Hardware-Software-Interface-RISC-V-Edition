#include <memory>
#include <verilated.h>
#include "VRISCVCPU.h"  // Replace with your generated top module header


int main(int argc, char** argv) {
    Verilated::mkdir("logs");

    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
    contextp->debug(0);
    contextp->randReset(2);
    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);

    const std::unique_ptr<VRISCVCPU> top{new VRISCVCPU{contextp.get(), "RISCVCPU"}};

    // Initialize inputs
    top->clk = 0;
    top->reset = 1;

    // Simulation loop
    // int cycles = 20;
    while (!contextp->gotFinish()) {
    // while (cycles-- > 0) {
        contextp->timeInc(1);
        top->clk = !top->clk;  // Toggle clock

        if (!top->clk) {
            // Deassert reset after some time
            if (contextp->time() > 5) {
                top->reset = 0;
            }
        }

        top->eval();

        // VL_PRINTF("[Time: %2" PRId64 "] clk: %d | reset: %d | pc: 0x%08x | alu_result: 0x%08x | instruction: 0x%08x | reg_read_data1: 0x%08x | reg_read_data2: 0x%08x | reg_write_data: 0x%08x \n\n",
        //   contextp->time(), top->clk, top->reset, top->pc, top->alu_result, top->instruction, top->reg_read_data1, top->reg_read_data2, top->reg_write_data);
        VL_PRINTF("[Time: %2" PRId64 "] clk: %d | reset: %d  \n\n",
         contextp->time(), top->clk, top->reset);
    }

    top->final();

#if VM_COVERAGE
    contextp->coveragep()->write("logs/coverage.dat");
#endif

    contextp->statsPrintSummary();
    return 0;
}
