# Simple test program to test the "add" instruction

# Data section (optional, for later tests)
.data
result:     .word 0    # Memory location to store the result of the add instruction

# Text (code) section
.text
.globl _start           # Define the entry point of the program
_start:
    # Initialize registers
    li x1, 10           # Load immediate value 10 into register x1
    li x2, 20           # Load immediate value 20 into register x2

    # Perform addition
    add x3, x1, x2      # x3 = x1 + x2 (x3 should now hold 30)

    # Store the result in memory (optional, for later testing)
    la x4, result       # Load the address of "result" into register x4
    sw x3, 0(x4)        # Store the value of x3 into memory at address "result"

    # End of program
    nop                 # No operation (optional placeholder)
