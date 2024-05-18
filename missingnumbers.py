def missingNumber(nums):
    res = len(nums)  # Initialize the result to be the size of the array
    for i in range(len(nums)):
        res += i - nums[i]  # Adjust the result by adding the index and subtracting the element
    return res

# Reading the input
n = int(input("Enter the number of elements: "))
nums = []

print("Enter the elements:")
for i in range(n):
    nums.append(int(input()))  # Read each element and append to the list

# Calculate the missing number
missing = missingNumber(nums)
print("The missing number is:", missing)
