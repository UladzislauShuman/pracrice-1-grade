N = int(input())
ans = 0

for i in range(1, N + 1):
    line = input()
    ans = ans + line.count("зайка")

print(str(ans))