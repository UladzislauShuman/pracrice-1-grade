ans = 0
line = input()
while line != "Приехали!":
    if "зайка" in line:
        ans = ans + 1
    line = input()
print(str(ans))