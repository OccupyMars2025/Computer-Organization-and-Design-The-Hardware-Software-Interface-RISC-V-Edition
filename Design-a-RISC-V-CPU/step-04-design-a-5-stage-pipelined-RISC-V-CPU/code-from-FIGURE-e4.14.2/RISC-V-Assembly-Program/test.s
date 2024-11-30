# Simple test program to test the "add" instruction

# Data section (optional, for later tests)
.data
result:     .word 0    # Memory location to store the result of the add instruction

# Text (code) section
.text
.globl _start           # Define the entry point of the program
_start:
    # Initialize registers
    li x1, 4          
    li x2, 8           

    # Now with the bypassing to the inputs of the ALU, you can see x3 get the value 
    add x3, x1, x2    
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    # TODO: When the sw instruction reaches the MEM stage, it uses EXMEMB to get the value of x1. 
    # Without forwarding, EXMEMB may contain an old value of x1 
    sw x1, 0(x3)
    lw x4, 0(x3)
    # x5 cannot get the correct value, load-use data hazard, cannot solve it using forwarding, must use "stall" which 
    # will be implemented in e4.14.3
    add x5, x4, x4  
    nop
    nop
    nop
    nop
    nop
    nop
    nop


    # # Store the result in memory (optional, for later testing)
    # # la x4, result       # Load the address of "result" into register x4
    # addi x4, x0, 400   # 12:    
    
    # sw x3, 0(x4)        # 16: Store the value of x3 into memory at address "result"
    
    # lw x5, 0(x4)        # 20:

    # beq x3, x5, 8       # 24
    # # End of program
    # nop                 # No operation (optional placeholder)
