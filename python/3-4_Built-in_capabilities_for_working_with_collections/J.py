from itertools import combinations
n = int(input())
nums = range(1, n)
print("А Б В")
for i, j in list(combinations(nums, 2)):
    print(f"{i} {j - i} {n - j}")



