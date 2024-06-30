n = int(input())
ans = 0

for i in range(1, n + 1):
    num = int(input())
    tempMax = 0
    while num != 0:
        temp = num % 10
        if temp > tempMax:
            tempMax = temp
        num = num // 10
    ans = ans * 10 + tempMax
print(str(ans))