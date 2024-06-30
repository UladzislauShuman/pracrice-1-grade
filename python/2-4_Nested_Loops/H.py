n = int(input())

maxName = input()

Num = int(input())
sum = 0
while Num != 0:
    sum = sum + Num % 10
    Num = Num // 10
maxN = sum

for i in range(2, n + 1):
    name = input()
    num = int(input())
    sum = 0
    while num != 0:
        sum = sum + num % 10
        num = num // 10
    if sum >= maxN:
        maxN = sum
        maxName = name
print(maxName)