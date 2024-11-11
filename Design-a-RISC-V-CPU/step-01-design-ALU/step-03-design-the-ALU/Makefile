
# Top module name
TOP_MODULE = alu

# Verilog source files
VERILOG_SRC = $(TOP_MODULE).v

# C++ testbench file
CPP_TB = $(TOP_MODULE)_tb.cpp

# Verilator generated directory
OBJ_DIR = obj_dir

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
	rm -rf $(OBJ_DIR) logs

.PHONY: all run clean
