n = int(input())
ans = 0
while n != 0:
    if n % 2 != 0:
        ans = ans * 10 + n % 10
    n = n // 10
ans = int(str(ans)[::-1])
print(int(ans))