n = int(input())
k = 1
level = 1
while k <= n:
    for i in range(1, level + 1):
        print(str(k), end=" ")
        k = k + 1
        if not (k <= n):
            break 
    print(" ")
    level = level + 1
