// page 113
SUM: ble x10, x0, SUM_EXIT
    add x11, x11, x10
    addi x10, x10, -1
    jal x0, SUM

SUM_EXIT:
    addi x12, x11, 0
    jalr x0, 0(x1)