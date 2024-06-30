n = int(input())
ans = 0 

for i in range(1, n + 1):
    b = False
    while (line := input()) != "ВСЁ":
        if "зайка" in line:
            b = True
    if b:
        ans = ans + 1
    
print(str(ans))