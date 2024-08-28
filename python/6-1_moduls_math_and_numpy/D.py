import math

nums = input().split()

product = 1.0 
for num in nums:
    product *= float(num)

print(math.pow(product, 1 / len(nums)))
