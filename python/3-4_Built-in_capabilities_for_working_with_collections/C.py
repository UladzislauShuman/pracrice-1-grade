from itertools import count
a, b, c = [float(i) for i in input().split()]

for value in count(a, c):
    if value <= b:
        print(round(value, 1))
    else:
        break