L = int(input())
N = int(input())

for i in range(1, N + 1):
    line = input()
    if len(line) <= L:
        print(line)
    else: 
        print(line[0:L - 3:1].ljust(L, "."))