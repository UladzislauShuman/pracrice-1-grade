n = int(input())
ans = True

for i in range(1, n + 1):
    line = input()
    if line[0] != 'а' and line[0] != 'б' and line[0] != 'в':
        ans = False
        break
if ans:
    print("YES")
else:
    print("NO")
