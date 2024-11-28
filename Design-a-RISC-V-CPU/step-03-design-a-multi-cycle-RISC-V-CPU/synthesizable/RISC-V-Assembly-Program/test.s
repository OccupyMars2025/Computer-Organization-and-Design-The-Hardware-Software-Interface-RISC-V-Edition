# Simple test program to test the "add" instruction

# Data section (optional, for later tests)
.data
result:     .word 0    # Memory location to store the result of the add instruction

# Text (code) section
.text
.globl _start           # Define the entry point of the program
_start:
    # Initialize registers
    li x1, 10           # 0: Load immediate value 10 into register x1: ADDI x1, x0, 10
    li x2, 20           # 4: Load immediate value 20 into register x2
    
    # Perform addition
    add x3, x1, x2      # 8: x3 = x1 + x2 (x3 should now hold 30)
    
    # Store the result in memory (optional, for later testing)
    # la x4, result       # Load the address of "result" into register x4
    addi x4, x0, 400   # 12:    
    
    sw x3, 0(x4)        # 16: Store the value of x3 into memory at address "result"
    
    lw x5, 0(x4)        # 20:

    beq x3, x5, 8       # 24
    # End of program
    nop                 # No operation (optional placeholder)
