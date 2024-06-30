num = int(input())
ans = True

if num == 1:
    print("NO")
else:
    k = int(num ** 0.5)
    for k in range(k, 1, -1):
        if num % k == 0:
            ans = False
            break
    if ans:
        print("YES")
    else:
        print("NO")

