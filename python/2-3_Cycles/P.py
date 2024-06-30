n = input()

if int(n) % 10 == 0:
    print("NO")
else:
    rev = n[::-1]
    if n == rev:
        print("YES")
    else:
        print("NO")
