// For std::unique_ptr
#include <memory>

// Include common routines
#include <verilated.h>

// Include model header, generated from Verilating "alu.v"
#include "Valu.h"

int main(int argc, char** argv) {
    // Create logs/ directory in case we have traces to put under it
    Verilated::mkdir("logs");

    // Construct a VerilatedContext to hold simulation time, etc.
    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
    contextp->debug(0);
    contextp->randReset(2);
    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);

    // Construct the ALU model
    const std::unique_ptr<Valu> alu{new Valu{contextp.get(), "ALU"}};

    // Define some test cases for the ALU
    struct TestCase {
        uint64_t a, b;
        uint32_t control;
        uint64_t expected_result;
    };

    TestCase test_cases[] = {
        {10, 5, 0b0000, 15},  // ADD: 10 + 5 = 15
        {10, 5, 0b0001, 5},   // SUB: 10 - 5 = 5
        {10, 5, 0b0010, 10 & 5},  // AND
        {10, 5, 0b0011, 10 | 5},  // OR
        {10, 5, 0b0100, 0xa ^ 5},  // XOR
        {10, 1, 0b0101, 10 << 1}, // SLL
        {10, 1, 0b0110, 10 >> 1}, // SRL
        {static_cast<uint64_t>(-10), 1, 0b0111, static_cast<uint64_t>(-10) >> 1} // SRA
    };

    // Run each test case
    for (const auto& test : test_cases) {
        // Set ALU inputs
        alu->a = test.a;
        alu->b = test.b;
        alu->alu_control = test.control;

        // Time step for each test case
        contextp->timeInc(1);
        alu->eval();

        // Check if result matches expected value
        if (alu->result == test.expected_result) {
            VL_PRINTF("[%" PRId64 "] Test Passed: a=%" PRIx64 " b=%" PRIx64 " control=%x result=%" PRIx64 "\n",
                      contextp->time(), test.a, test.b, test.control, alu->result);
        } else {
            VL_PRINTF("[%" PRId64 "] Test Failed: a=%" PRIx64 " b=%" PRIx64 " control=%x result=%" PRIx64 " (expected=%" PRIx64 ")\n",
                      contextp->time(), test.a, test.b, test.control, alu->result, test.expected_result);
        }
    }

    // Final model cleanup
    alu->final();

    // Coverage analysis
#if VM_COVERAGE
    Verilated::mkdir("logs");
    contextp->coveragep()->write("logs/coverage.dat");
#endif

    // Final simulation summary
    contextp->statsPrintSummary();

    return 0;
}
