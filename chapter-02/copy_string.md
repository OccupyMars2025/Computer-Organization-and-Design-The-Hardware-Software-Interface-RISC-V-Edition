The given C code for `strcpy` can be translated into RISC-V assembly code. Here's a general approach for converting it:

### C Code
```c
void strcpy (char x[], char y[]) {
    size_t i;
    i = 0;
    while ((x[i] = y[i]) != '\0') /* copy & test byte */
        i += 1;
}
```

### RISC-V Assembly (Simplified Translation)
In RISC-V assembly, we need to follow the same logic of copying characters from `y` to `x` until we encounter the null terminator (`\0`).

```assembly
    # Assume:
    # a0 = address of x (destination)
    # a1 = address of y (source)

    li t0, 0                # t0 = i = 0

loop:
    lb t1, 0(a1)            # Load byte y[i] into t1
    sb t1, 0(a0)            # Store byte into x[i]
    beq t1, zero, done      # If byte is '\0', exit the loop
    addi a1, a1, 1          # Increment address of y (source)
    addi a0, a0, 1          # Increment address of x (destination)
    j loop                  # Repeat loop

done:
    ret                     # Return from the function
```

### Explanation:

- **li t0, 0**: Initialize `t0` (i) to 0. We use `t0` to track the index, though in this version, we simply increment pointers instead of using an index variable.
- **lb t1, 0(a1)**: Load a byte from the source string (`y[i]`), stored at address `a1`, into register `t1`.
- **sb t1, 0(a0)**: Store the byte from `t1` into the destination string (`x[i]`), stored at address `a0`.
- **beq t1, zero, done**: If the byte loaded is zero (`\0`), exit the loop.
- **addi a1, a1, 1**: Increment the address pointer for `y`.
- **addi a0, a0, 1**: Increment the address pointer for `x`.
- **j loop**: Jump back to the beginning of the loop.
- **ret**: Return from the function when the copying is done.

This is a basic translation of the logic in C into RISC-V assembly instructions. Let me know if you need further details or specific variations for registers or memory locations.