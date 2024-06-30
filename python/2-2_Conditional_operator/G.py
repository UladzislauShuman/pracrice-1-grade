num = int(input())
num1 = num

d = num % 10
num = num // 10
c = num % 10
num = num // 10
b = num % 10
num = num // 10
a = num % 10
num = num // 10

num2 = d * 1000 + c * 100 + b * 10 + a

if num2 == num1:
    print("YES")
else:
    print("NO")