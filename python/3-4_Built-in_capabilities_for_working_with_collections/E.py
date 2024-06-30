from itertools import chain
a = input()
b = input()
c = input()
lst = sorted(set(chain(a.split(", "), b.split(", "), c.split(", "))))

for index, value in enumerate(lst, 1):
    print(f"{index}. {value}")