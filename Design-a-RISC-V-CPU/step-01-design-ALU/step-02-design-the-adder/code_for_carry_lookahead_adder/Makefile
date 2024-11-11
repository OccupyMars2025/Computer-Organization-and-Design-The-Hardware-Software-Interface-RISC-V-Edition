# Python script to generate the Verilog file
GENERATOR_SCRIPT = generate_carry_lookahead_adder.py

# Generated Verilog source file
VERILOG_SRC = carry_lookahead_adder.v

# C++ testbench file
CPP_TB = carry_lookahead_adder_tb.cpp

# Verilator generated directory
OBJ_DIR = obj_dir

# Top module name
TOP_MODULE = carry_lookahead_adder

# Executable name
EXE = $(OBJ_DIR)/V$(TOP_MODULE)

# Default target 
all: run

# Step 1: Run Python script to generate carry_lookahead_adder.v
$(VERILOG_SRC): $(GENERATOR_SCRIPT)
	@echo "Running generator script to create carry_lookahead_adder.v..."
	python3 $(GENERATOR_SCRIPT)

# Step 2: Compile Verilog and C++ testbench with Verilator
$(EXE): $(VERILOG_SRC) $(CPP_TB)
	@echo "Compiling with Verilator..."
	verilator --cc $(VERILOG_SRC) --exe $(CPP_TB) --trace --top-module $(TOP_MODULE)
	@echo "Building the executable..."
	make -j -C $(OBJ_DIR) -f V$(TOP_MODULE).mk V$(TOP_MODULE)

# Step 3: Run the simulation executable
run: $(EXE)
	@echo "Running the testbench..."
	$(EXE)

# Clean up generated files
clean:
	@echo "Cleaning up generated files..."
	rm -rf $(OBJ_DIR) $(VERILOG_SRC)

.PHONY: all run clean
