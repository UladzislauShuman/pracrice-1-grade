n = int(input())
ans = 0

for i in range(1, n + 1):
    num = int(input())
    tempSum = 0
    while num != 0:
        tempSum = tempSum + num % 10
        num = num // 10
    ans = ans + tempSum

print(str(ans))
        