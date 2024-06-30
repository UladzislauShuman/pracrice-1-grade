n = int(input())
ans = 1
if n == 0:
    ans = 1
else:
    for i in range(1, n + 1):
        ans = ans * i
print(str(ans))