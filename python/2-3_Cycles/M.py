n = int(input())
min_ = input()
for i in range(2, n + 1):
    name = input()
    if name < min_:
        min_ = name

print(min_)
