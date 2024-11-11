import pandas as pd

# Define initial values for the registers in binary (64-bit for Product, 32-bit for Multiplicand and Multiplier)
product = '0000000000000000000000000000000000000000000000000000000000000000'  # 64-bit Product initialized to 0
multiplicand = '00000000000000000000000000000000000000000000000000000000001010'   # 32-bit Multiplicand padded for 64-bit alignment
multiplier = '00000000000000000000000000000000000000000000000000000000110010'  # 32-bit Multiplier padded for 64-bit alignment

# Initialize table to capture each step
table = []

# Define function to perform binary addition on 64-bit strings
def binary_addition(bin1, bin2):
    # Convert to integers, add, and format back to 64-bit binary
    result = bin(int(bin1, 2) + int(bin2, 2))[2:]
    return result.zfill(64)

# Run the algorithm for each step
for i in range(5):  # Limiting to 5 iterations as seen in Figure 3.6 example
    iteration_info = {"Iteration": i, "Step": [], "Multiplier": multiplier, "Multiplicand": multiplicand, "Product": product}
    
    # Step 1: Check the LSB of Multiplier
    if multiplier[-1] == '1':  # If LSB of multiplier is 1, add multiplicand to product
        product = binary_addition(product, multiplicand)
        iteration_info["Step"].append(f"1a: 1 ⇒ Prod = Prod + Mcand")
    else:
        iteration_info["Step"].append("1: 0 ⇒ No operation")
    
    # Step 2: Shift left the Multiplicand (64-bit)
    multiplicand = multiplicand[1:] + '0'
    iteration_info["Step"].append("2: Shift left Multiplicand")
    
    # Step 3: Shift right the Multiplier (64-bit)
    multiplier = '0' + multiplier[:-1]
    iteration_info["Step"].append("3: Shift right Multiplier")
    
    # Add updated values to the table for this iteration
    iteration_info["Multiplier"] = multiplier
    iteration_info["Multiplicand"] = multiplicand
    iteration_info["Product"] = product
    table.append(iteration_info)

# Create a DataFrame to display
df = pd.DataFrame([
    {
        "Iteration": row["Iteration"],
        "Step": "; ".join(row["Step"]),
        "Multiplier": row["Multiplier"][-6:],  # Display last 6 bits for simplicity
        "Multiplicand": row["Multiplicand"][-6:],  # Display last 6 bits for simplicity
        "Product": row["Product"][-8:],  # Display last 8 bits for simplicity
    }
    for row in table
])

import ace_tools as tools; tools.display_dataframe_to_user(name="Multiplication Process Table", dataframe=df)
