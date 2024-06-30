num = int(input())
temp = num

c = num % 10
num = num // 10

b = num % 10
num = num // 10

a = num % 10
num = num // 10

A = a + b
B = b + c

print(f"{max(A,B)}{min(A,B)}")