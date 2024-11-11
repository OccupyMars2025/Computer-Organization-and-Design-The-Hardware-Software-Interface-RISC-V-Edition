# Verilog source files
VERILOG_SRC = ripple_carry_adder.v full_adder.v

# C++ testbench file
CPP_TB = ripple_carry_adder_tb.cpp

# Verilator generated directory
OBJ_DIR = obj_dir

# Top module name
TOP_MODULE = ripple_carry_adder

# Executable name
EXE = $(OBJ_DIR)/V$(TOP_MODULE)

# Default target
all: run

# Step 1: Compile Verilog and C++ testbench with Verilator
$(EXE): $(VERILOG_SRC) $(CPP_TB)
	@echo "Compiling with Verilator..."
	verilator --cc $(VERILOG_SRC) --exe $(CPP_TB) --trace --top-module $(TOP_MODULE)
	@echo "Building the executable..."
	make -j -C $(OBJ_DIR) -f V$(TOP_MODULE).mk V$(TOP_MODULE)

# Step 2: Run the simulation executable
run: $(EXE)
	@echo "Running the testbench..."
	$(EXE) 

# Clean up generated files
clean:
	@echo "Cleaning up generated files..."
	rm -rf $(OBJ_DIR)

.PHONY: all run clean
