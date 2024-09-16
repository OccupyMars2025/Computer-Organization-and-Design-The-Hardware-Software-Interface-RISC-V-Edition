strcpy:
    addi t0, zero, 0 # t0: value of i, set i to 0
LOOP:
    add t1, a0, t0 # t1: address of x[i]
    add t2, a1, t0 # t2: address of y[i]
    lbu t3, 0(t2) # t3: value of y[i]
    sb t3, 0(t1) # x[i] = y[i]
    beq t3, zero, EXIT # if y[i] == 0, then exit

    addi t0, t0, 1 # i++
    jal zero, LOOP

EXIT:
    jalr zero, 0(ra)

    
    