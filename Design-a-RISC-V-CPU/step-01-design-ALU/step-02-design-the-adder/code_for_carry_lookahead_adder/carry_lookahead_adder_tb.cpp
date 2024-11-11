#include <memory>
#include <verilated.h>
#include "Vcarry_lookahead_adder.h"


int main(int argc, char** argv) {
    // Initialize simulation context
    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
    contextp->commandArgs(argc, argv);
    contextp->traceEverOn(true);

    // Instantiate the ripple_carry_adder module
    const std::unique_ptr<Vcarry_lookahead_adder> top{new Vcarry_lookahead_adder{contextp.get(), "TOP"}};

    // Test count
    int pass_count = 0;
    int fail_count = 0;

    // Exhaustive testing loop for 8-bit adder (for larger sizes, choose specific test cases)
    const int WIDTH = 8; // Change this to match the adder's width
    for (int a = 0; a < (1 << WIDTH); ++a) {
        for (int b = 0; b < (1 << WIDTH); ++b) {
            for (int cin = 0; cin < 2; ++cin) {
                // Set inputs
                top->A = a;
                top->B = b;
                top->Cin = cin;

                // Evaluate the model
                top->eval();

                // Calculate expected results
                int expected_sum = (a + b + cin) & ((1 << WIDTH) - 1); // Mask to WIDTH bits
                int expected_cout = (a + b + cin) >> WIDTH;             // Extract carry-out

                // Check results and log discrepancies
                bool pass = (top->Sum == expected_sum) && (top->Cout == expected_cout);
                if (pass) {
                    pass_count++;
                } else {
                    fail_count++;
                    printf("FAIL: A=%x, B=%x, Cin=%x | Expected Sum=%x, Cout=%x | Got Sum=%x, Cout=%x\n",
                           a, b, cin, expected_sum, expected_cout, top->Sum, top->Cout);
                }
            }
        }
    }

    // Summary
    printf("Test Results: %d Passed, %d Failed\n", pass_count, fail_count);

    // Finalize the model
    top->final();
    contextp->statsPrintSummary();
    return fail_count == 0 ? 0 : 1; // Return 0 if all tests pass, 1 if there are failures
}
