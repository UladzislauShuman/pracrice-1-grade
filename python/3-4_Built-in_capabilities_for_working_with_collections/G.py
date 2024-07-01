from itertools import combinations


n = int(input())
names = []
for i in range(n):
    names.append(input())
pairs = list(combinations(names, 2))

for pair in pairs:
    print(f"{pair[0]} - {pair[1]}")