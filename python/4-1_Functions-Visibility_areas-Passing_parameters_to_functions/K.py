num = int(input())
d = num % 10
num = num // 10

c = num % 10
num = num // 10

b = num % 10
num = num // 10

a = num % 10
num = num // 10

print(str(b), str(a), str(d), str(c), sep="")