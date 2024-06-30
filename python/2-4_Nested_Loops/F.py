n = int(input())

a = int(input())

for i in range(2, n + 1):
    b = int(input())
    while a != 0 and b != 0:
        if a > b:
            a = a % b 
        else:
            b = b % a 
    a = max(a, b)

print(str(a))
