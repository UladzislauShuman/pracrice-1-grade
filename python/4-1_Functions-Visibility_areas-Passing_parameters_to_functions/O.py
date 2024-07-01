T = int(input())

temp = (M + T) // 60
M = (M + T) - temp * 60

N = (N + temp) % 24

print(f"{N:02}", ":", f"{M:02}", sep="")