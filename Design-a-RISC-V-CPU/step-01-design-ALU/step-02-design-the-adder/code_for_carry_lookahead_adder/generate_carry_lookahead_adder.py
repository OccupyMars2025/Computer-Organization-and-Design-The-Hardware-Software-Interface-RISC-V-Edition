# N = 64
N = 8

import os

# print(os.path.abspath(__file__))
script_dir = os.path.dirname(os.path.abspath(__file__))
# print(script_dir)
file_path = os.path.join(script_dir, 'carry_lookahead_adder.v')
# print(file_path)

with open(file_path, 'w') as f:
    f.write("// This file was automatically generated by generate_carry_lookahead_adder.py\n")
    f.write("module carry_lookahead_adder (\n")
    f.write("    input [{}:0] A, B,\n".format(N-1))
    f.write("    input Cin,\n")
    f.write("    output [{}:0] Sum,\n".format(N-1))
    f.write("    output Cout\n")
    f.write(");\n\n")
    
    f.write("    wire [{}:0] G, P, C;\n\n".format(N-1))
    
    # Generate and Propagate signals
    f.write("    // Generate and Propagate signals\n")
    f.write("    assign G = A & B;\n")
    f.write("    assign P = A ^ B;\n\n")
    
    # Carry signals
    f.write("    // Carry signals\n")
    f.write("    assign C[0] = Cin;\n")
    for i in range(1, N):
        terms = []
        for k in range(1, i+1):
            p_terms = ' & '.join(['P[{}]'.format(j) for j in reversed(range(i-k+1, i))])
            if p_terms:
                term = '({} & G[{}])'.format(p_terms, i-k)
            else:
                term = 'G[{}]'.format(i-k)
            # print(term)
            terms.append(term)
        # print(40*'-')
        # Add the term with P[...] & C[0]
        p_terms = ' & '.join(['P[{}]'.format(j) for j in reversed(range(0, i))])
        # term = '({} & C[0])'.format(p_terms), Caution: if you use C[0]  instead of Cin, you will get an error: Circular combinational logic error
        term = '({} & Cin)'.format(p_terms)
        terms.append(term)
        # Now, assemble the assign statement
        assign_stmt = '    assign C[{}] = {};\n'.format(i, ' | '.join(terms))
        f.write(assign_stmt)
    
    f.write("\n    assign Cout = G[{}] | (P[{}] & C[{}]);\n".format(N-1, N-1, N-1))
    
    # Sum calculation
    f.write("\n    // Sum calculation\n")
    f.write("    assign Sum = P ^ C;\n")
    f.write("endmodule\n")