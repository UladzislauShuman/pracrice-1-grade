from itertools import accumulate
for line in accumulate([word + ' ' for word in input().split()]):
    print(line)