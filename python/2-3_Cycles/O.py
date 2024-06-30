n = int(input())

ans = 0
for i in range(1, n + 1):
    line = input()
    if "зайка" in line:
        ans = ans + 1
    
print(str(ans))