from itertools import product

names = ["пик", "треф", "бубен", "червей"]
numbers = ["2", "3", "4", "5", "6", "7", "8", "9", "10", "валет", "дама", "король", "туз"]

names.remove(input())

pairs = list(product(numbers, names))
for pair in pairs:
    print(f"{pair[0]} {pair[1]}")