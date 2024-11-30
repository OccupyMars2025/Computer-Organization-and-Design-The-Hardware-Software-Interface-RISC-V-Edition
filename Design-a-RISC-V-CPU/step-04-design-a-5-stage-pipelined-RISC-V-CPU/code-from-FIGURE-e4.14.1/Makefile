# Makefile for testing the RISC-V CPU using Verilator

# Tools and flags
RISCV_AS = riscv64-unknown-elf-as
RISCV_LD = riscv64-unknown-elf-ld
RISCV_OBJCOPY = riscv64-unknown-elf-objcopy
VERILATOR = verilator
XXD = xxd
CXX = g++
CXXFLAGS = -O2 -std=c++17 -Wall -Werror
VSRCS = RISCVCPU.v  # Replace with your Verilog top module and additional files
ASM_DIR = RISC-V-Assembly-Program
TOP_MODULE = VRISCVCPU

# Target filenames
ASM = $(ASM_DIR)/test.s
OBJ = $(ASM_DIR)/test.o
ELF = $(ASM_DIR)/test.elf
BIN = $(ASM_DIR)/test.bin
RAW_MEM = $(ASM_DIR)/instructions_raw.mem
MEM = $(ASM_DIR)/instructions.mem
TB_CPP = test_cpu.cpp
EXE = obj_dir/${TOP_MODULE}

all: simulate

# Step 1: Assemble RISC-V program
$(OBJ): $(ASM)
	$(RISCV_AS) -o $@ $<

# Step 2: Link RISC-V program
$(ELF): $(OBJ)
	$(RISCV_LD) -o $@ $<

# Step 3: Convert ELF to binary
$(BIN): $(ELF)
	$(RISCV_OBJCOPY) -O binary $< $@

# Step 4: Generate Verilog memory initialization file
$(MEM): $(BIN)
	$(XXD) -e -g4 -c4 -u $< > $(RAW_MEM)
	python process_mem.py $(RAW_MEM) $@


# Step 5: Compile the Verilog design with Verilator
verilate: $(VSRCS)
	$(VERILATOR) --cc $(VSRCS) --exe $(TB_CPP) -CFLAGS "$(CXXFLAGS)" --trace
	make -C obj_dir -f ${TOP_MODULE}.mk ${TOP_MODULE}

# Step 6: Compile the simulation C++ code
$(EXE): verilate
	make -C obj_dir -f ${TOP_MODULE}.mk

# Step 7: Simulate the CPU  
simulate: $(MEM) $(EXE)
	./$(EXE)

# Clean up intermediate files
clean:
	rm -rf $(ASM_DIR)/*.o $(ASM_DIR)/*.elf $(ASM_DIR)/*.bin $(ASM_DIR)/*.mem obj_dir logs *.vcd

.PHONY: all clean verilate simulate
