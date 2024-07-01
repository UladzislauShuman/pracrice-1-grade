from itertools import product, islice
n = int(input())
nums = range(1, n + 1)

result = [a * b for a, b in product(nums, repeat=2)]

for i in range(n):
    print(*islice(result, i * n, (i + 1) * n))