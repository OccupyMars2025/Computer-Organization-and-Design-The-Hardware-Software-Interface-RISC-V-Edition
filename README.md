## In fact, to compete with current compilers, the assembly language programmer needs to understand the concepts in Chapters 4 and 5 thoroughly (processor pipelining and memory hierarchy).
# Let's beat the modern compilers !
# Don't study from a textbook alone. Combine your textbook with your college course, as the course has many supplementary resources to help you learn.
## People were once taught to use pointers in C to get greater efficiency than that available with arrays: “Use pointers, even if you can’t understand the code.” Modern optimizing compilers can produce code for the array version that is just as good.Most programmers today prefer that the compiler do the heavy lifting. As AI develops, we will only use natural language or brain-computer interfaces to command machines before 2030
## 2018/10/30: [round 1](https://github.com/OccupyMars2025/Learning_Assembly_Language_with_MARS_the_mips_simulator)
## 2023/10/19 - 11/6: round 2
## 2024/2/28: round 3

---
# I use the 2nd edition as my textbook
- [x] 2024/9/3 16:10- 10/27 20:27: (page 66-188) Chapter 2: Instructions: language of the computer
- [ ] 10/27 20:27 - : (page 188-252) Chapter 3: Arithmetic for Computers
  - [x] 10/27 20:27 - 10/28 19:28: (page 190-193) Section 3.2: Addition and Subtraction
  - [x] 10/28 19:28 - 10/30 14:10: (page 193-199) Section 3.3: Multiplication
  - [x] 10/30 14:10 - 10/31 10:00: (page 199-207) Section 3.4: Division
  - [ ] 10/31 10:00 - : (page 208-) Section 3.5: Floating Point

### (page 102)Surprisingly, it took me 1 hour and 30 minutes to manually compile a recursive C program to RISC-V code. Haha, interesting. Great, these questions got me interested in how compilers work!


---
## How to study "computer architecture" ? Recommend some textbooks and learning resources
Studying computer architecture requires understanding both high-level design principles and low-level details of how a computer’s hardware processes data. Here’s a structured approach along with some recommended textbooks and resources:

### Approach
1. **Start with fundamental concepts**: Focus on processor design, memory hierarchy, input/output, and performance metrics.
2. **Work on problem-solving**: Understanding how different architecture choices impact performance and efficiency is key.
3. **Experiment with simulators**: Use tools to experiment with different architectural designs and understand how they influence operations.
4. **Study modern architectures**: Review case studies of modern processors to understand current trends and innovations.

### Recommended Textbooks
1. **"Computer Organization and Design: The Hardware/Software Interface" by David A. Patterson and John L. Hennessy** – A foundational textbook that covers core topics with practical examples, suitable for beginners.
2. **"Computer Architecture: A Quantitative Approach" by John L. Hennessy and David A. Patterson** – This more advanced book focuses on performance and quantitative analysis of computer architecture, ideal for those with some background.
3. **"Structured Computer Organization" by Andrew S. Tanenbaum** – Known for its clarity, this book offers a layered view of computer architecture, making it accessible to beginners.
4. **"Digital Design and Computer Architecture" by David M. Harris and Sarah L. Harris** – A practical, hands-on guide that bridges digital logic and computer architecture with examples and exercises.
5. **"Modern Processor Design: Fundamentals of Superscalar Processors" by John Paul Shen and Mikko H. Lipasti** – A more advanced text focusing on the design of high-performance processors.

### Additional Resources
- **NAND to Tetris (The Elements of Computing Systems)** – A project-based course/book that takes you through building a computer from logic gates up to a functioning OS.
- **MIT OpenCourseWare: Computation Structures (6.004)** – A free course that covers computer architecture fundamentals, with lectures and assignments.
- **CPU Simulators** – Tools like MARSSx86 and Gem5 let you simulate processor architectures, helping you see how changes in design impact performance.

Combining theoretical knowledge, hands-on practice, and exploration of real-world architectures will provide a strong foundation in computer architecture.


---
## How to study "computer architecture" with a focus on RISC-V ? Recommend some textbooks and learning resources
Studying computer architecture with a focus on RISC-V is a great way to understand modern, open-source processor design principles. RISC-V is widely used in education and research due to its simplicity and openness. Here’s a study approach with recommended resources focused specifically on RISC-V:

### Approach
1. **Understand RISC principles**: RISC-V is based on the Reduced Instruction Set Computing (RISC) principles, so it's helpful to start with the fundamentals of RISC architecture.
2. **Dive into the RISC-V ISA**: Learn the RISC-V Instruction Set Architecture (ISA), which is the blueprint for how RISC-V processors execute instructions.
3. **Experiment with RISC-V simulators**: Using simulators and development boards, you can explore the practical side of RISC-V and see your code running on RISC-V processors.
4. **Explore advanced topics**: Once comfortable with basics, move on to advanced topics like pipeline design, performance optimization, and specialized extensions in RISC-V.

### Recommended Textbooks
1. **"The RISC-V Reader: An Open Architecture Atlas" by David A. Patterson and Andrew Waterman** – This book provides an introduction to RISC-V, covering the ISA in detail and comparing it with other architectures.
2. **"Computer Organization and Design RISC-V Edition: The Hardware/Software Interface" by David A. Patterson and John L. Hennessy** – This is a comprehensive textbook on computer organization with a focus on RISC-V, covering fundamental concepts with practical examples.
3. **"Introduction to RISC-V: A Hands-On Approach" by P. David Sirer** – An introductory book that includes practical examples and exercises, focusing specifically on RISC-V.

### Additional Resources
- **RISC-V Specifications** – Available on the official RISC-V website, these documents provide detailed information on the RISC-V ISA, including the base ISA and optional extensions.
- **RISC-V Foundation Website** – The official site offers tutorials, community resources, and updates on the latest developments in RISC-V.
- **Spike Simulator** – Spike is an open-source RISC-V simulator developed by the RISC-V community that allows you to experiment with RISC-V programs without needing hardware.
- **MIT OpenCourseWare: Advanced Computer Architecture** – This course, while not exclusive to RISC-V, has materials and assignments that can be adapted to RISC-V for a deeper understanding.

Combining these resources with hands-on practice and simulations will help you build a solid foundation in RISC-V-focused computer architecture.


---
## How to attain the goal of "design a RISC-V CPU" step by step for a beginner ? 
Designing a RISC-V CPU from scratch is an ambitious goal, but it’s achievable with a structured approach, especially given RISC-V's simplicity and modularity. Here’s a step-by-step guide for a beginner:

### Step 1: Learn the Fundamentals of Digital Logic
- **Goal**: Understand digital logic circuits, binary arithmetic, and basic components like flip-flops, multiplexers, adders, and registers.
- **Suggested Resources**: 
  - "Digital Design and Computer Architecture" by David M. Harris and Sarah L. Harris.
  - Online courses on digital logic (e.g., Coursera’s Digital Systems by University of Illinois).

### Step 2: Understand RISC-V Architecture and ISA
- **Goal**: Gain a solid grasp of the RISC-V Instruction Set Architecture (ISA), the blueprint for RISC-V CPUs.
- **Suggested Resources**:
  - "The RISC-V Reader: An Open Architecture Atlas" by David A. Patterson and Andrew Waterman.
  - RISC-V specification documents from the RISC-V Foundation website.
  - Online resources like the RISC-V Foundation’s tutorials and community forums.

### Step 3: Learn Hardware Description Languages (HDLs)
- **Goal**: Get familiar with HDLs like Verilog or VHDL, which are essential for designing digital circuits and CPUs.
- **Suggested Resources**:
  - Online courses on Verilog or VHDL (e.g., Udemy or Coursera).
  - Practice using HDL with simulation tools such as ModelSim or Icarus Verilog.

### Step 4: Start with a Simple RISC-V Core Design
- **Goal**: Begin designing a basic single-cycle RISC-V core. This includes basic components like an ALU (Arithmetic Logic Unit), registers, and control logic.
- **Suggested Resources**:
  - Online tutorials on single-cycle CPU design (there are several open-source RISC-V core examples available).
  - "Computer Organization and Design RISC-V Edition" by David Patterson and John Hennessy.

### Step 5: Simulate Your Design
- **Goal**: Use simulation tools to test your single-cycle RISC-V core, checking that it can run basic instructions.
- **Tools**:
  - **Simulators**: Verilator (open-source Verilog simulator) or ModelSim.
  - **Testbenches**: Write test cases that validate each component and instruction in your CPU.

### Step 6: Move to a Multicycle or Pipelined Core (Optional)
- **Goal**: If you want to improve performance, design a multicycle or pipelined RISC-V core, breaking up instruction processing into multiple stages.
- **Resources**:
  - Further study of pipelining techniques from books like "Computer Architecture: A Quantitative Approach" by John L. Hennessy and David A. Patterson.

### Step 7: Implement Memory and I/O Interfaces
- **Goal**: Integrate memory access and basic I/O for a more complete CPU. Learn how the CPU interacts with memory and peripherals.
- **Resources**:
  - Documentation on memory interfacing.
  - Simple SRAM or DRAM modules for memory, simulated or real.

### Step 8: Synthesize and Test on an FPGA
- **Goal**: Transfer your RISC-V CPU design onto an FPGA (Field Programmable Gate Array) to see it running on real hardware.
- **Suggested Tools**:
  - **FPGA Boards**: Popular boards include Xilinx’s Basys 3 or Intel’s DE10-Lite.
  - **FPGA Software**: Xilinx Vivado or Intel Quartus for synthesis and deployment.

### Step 9: Optimize and Extend Your CPU Design
- **Goal**: Add more features (e.g., caching, branching prediction) and optimize your design for efficiency.
- **Suggested Resources**:
  - Research papers and advanced books on computer architecture to explore optimizations.
  - RISC-V extensions and optional ISA features (e.g., RISC-V floating-point instructions).

This roadmap, while detailed, is flexible. You can proceed at your own pace, experimenting with simpler versions before tackling a full-fledged CPU.



---

## How to attain the goal of "design a GPU to train AI models" step by step for a beginner ? 
Designing a GPU to train AI models is an advanced but fascinating project. Here’s a structured guide to help you, especially as a beginner, build up the knowledge and skills required to eventually design a simplified GPU for AI:

### Step 1: Understand Computer Architecture Basics
- **Goal**: Familiarize yourself with fundamental concepts in computer architecture, especially parallel processing, as GPUs are highly parallel systems.
- **Suggested Resources**:
  - "Computer Organization and Design" by David Patterson and John Hennessy.
  - Basic tutorials on CPU vs. GPU architectures (look for beginner-friendly online articles or videos).

### Step 2: Learn the Basics of Digital Logic and Hardware Design
- **Goal**: Develop an understanding of digital circuits and how components like ALUs, memory, and control units work.
- **Suggested Resources**:
  - "Digital Design and Computer Architecture" by David Harris and Sarah Harris.
  - Online courses on digital logic (e.g., Coursera, edX).
  - Hands-on projects, like designing a simple ALU or memory unit, can help solidify your knowledge.

### Step 3: Study GPU Architecture and Parallel Processing Principles
- **Goal**: Gain a foundational understanding of GPU architecture, which is optimized for parallel data processing.
- **Suggested Resources**:
  - "Programming Massively Parallel Processors: A Hands-on Approach" by David B. Kirk and Wen-mei W. Hwu.
  - Explore the CUDA architecture (NVIDIA's parallel computing platform) and the OpenCL framework, both of which are useful for understanding GPU parallel processing.
  - NVIDIA’s and AMD’s white papers on GPU architectures to get insights into real-world designs.

### Step 4: Learn Hardware Description Languages (HDLs)
- **Goal**: Get familiar with Verilog or VHDL, which are essential for designing digital hardware.
- **Suggested Resources**:
  - Online courses in Verilog or VHDL (e.g., Udemy, Coursera).
  - Practice designing simple digital circuits with HDL to get hands-on experience.

### Step 5: Design a Simple SIMD Processor (Single Instruction, Multiple Data)
- **Goal**: Create a simplified SIMD processor, a basic model of a GPU, to practice processing multiple data points in parallel.
- **Suggested Resources**:
  - Study materials on SIMD architectures.
  - Experiment with Verilog/VHDL to create a simple SIMD processor and test it using simulation software like ModelSim or Verilator.

### Step 6: Study Memory Hierarchy and Bandwidth Optimization
- **Goal**: Understand memory hierarchy principles, including high-bandwidth memory access, which is crucial for GPU design.
- **Suggested Resources**:
  - "Computer Architecture: A Quantitative Approach" by Hennessy and Patterson for a deeper dive into memory hierarchy.
  - Research articles or resources on high-bandwidth memory (HBM) in GPUs, as this affects the efficiency of data transfer in AI training tasks.

### Step 7: Learn About Tensor Cores and AI Model Processing
- **Goal**: Study how tensor cores and matrix multiplications are handled in GPUs designed for AI.
- **Suggested Resources**:
  - White papers on NVIDIA’s tensor cores or AMD’s matrix multiplication cores.
  - Research on AI hardware acceleration to understand how tensor processing units (TPUs) and GPUs optimize for AI tasks.

### Step 8: Design a Basic GPU Core with Matrix Multiplication Capability
- **Goal**: Implement a basic GPU core in HDL that can perform parallel matrix multiplications, a key operation in AI models.
- **Suggested Tools**:
  - Implement the design in Verilog or VHDL, focusing on parallel ALUs capable of matrix operations.
  - Simulate the design using tools like Verilator or ModelSim.

### Step 9: Implement and Test Your GPU Design on an FPGA
- **Goal**: Transfer your GPU design to an FPGA to test its functionality on real hardware.
- **Suggested Tools**:
  - FPGA boards like the Xilinx Zynq or Altera DE10-Nano.
  - Synthesis tools such as Xilinx Vivado or Intel Quartus for deploying your HDL design onto the FPGA.

### Step 10: Optimize and Scale Your GPU Design
- **Goal**: Add multiple processing units to simulate a scaled-up GPU, optimize memory access, and explore features like memory caching.
- **Suggested Resources**:
  - Advanced research articles on GPU scaling and optimization techniques.
  - Experiment with adding more cores to your design to improve parallelism.

This structured approach will help you gradually build the skills necessary to design a simplified GPU for AI tasks. It’s a challenging path but rewarding and provides valuable insights into both hardware design and AI processing.


---

# Reference:
## Wondeful resources: https://github.com/OccupyMars2025/learn-riscv
## [2nd Edition Solution Manual](https://www.studocu.com/row/document/tsinghua-university/computer-science/david-a-patterson-john-l-hennessy-computer-organization-and-design-risc-v-edition2nd-solution-manual/77861510)

## [Solution Manual for RISC-V Edition](https://www.doc88.com/p-4853978634496.html)
## [Solution to Appendix A](https://www.studocu.com/row/document/jamaa%D8%A9-almnsor%D8%A9/computer-organization-and-design/appendix-a-computer-organization-and-design/46431812)

## https://github.com/riscv/learn
## https://github.com/TheThirdOne/rars
## https://github.com/LC-John/RISCV-Simulator
## [online content(there is a verilog implementation of a RISC-V CPU, study it very carefully)](https://www.elsevier.com/books-and-journals/book-companion/9780128203316)

## http://chinetti.me/classes/ece485/cd%20content/Advanced-Content-and-Appendixes.html   
## https://github.com/dmohindru/cod5e
## https://www.studocu.com/ko/document/konkuk-university/%EC%BB%B4%ED%93%A8%ED%84%B0%EA%B5%AC%EC%A1%B0/computerorganizaion-design-5th-solution/9639022


# TODO:
## use verilog and chisel respectively to implement a RISC-V CPU to run xv6-riscv
