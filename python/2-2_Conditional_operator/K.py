num = int(input())

c = num % 10
num = num // 10

b = num % 10
num = num // 10

a = num % 10
num = num // 10

Max = max(a, b, c)
Min = min(a, b, c)
Mid = 0

if a != Max and a != Min:
    Mid = a
elif b != Max and b != Min:
    Mid = b
else:
    Mid = c

if Max + Min == Mid * 2:
    print("YES")
else:
    print("NO")