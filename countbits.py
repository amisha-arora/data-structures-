n = int(input("Enter the length: "))
bitcount = [0] * (n + 1)  # Initialize a list with n+1 zeros

for i in range(1, n + 1):
    bitcount[i] = bitcount[i & (i - 1)] + 1  # Calculate the number of set bits

# Print the number of set bits for each number from 0 to n
for i in range(n + 1):
    print(f"Number {i} has {bitcount[i]} set bits.") #here f means formatted string literal
