num1 = int(input())
num2 = int(input())

d1 = num1 % 10
num1 = num1 // 10
d2 = num2 % 10
num2 = num2 // 10
d3 = (d1 + d2) % 10

d1 = num1 % 10
num1 = num1 // 10
d2 = num2 % 10
num2 = num2 // 10
c3 = (d1 + d2) % 10

d1 = num1 % 10
num1 = num1 // 10
d2 = num2 % 10
num2 = num2 // 10
b3 = (d1 + d2) % 10

d1 = num1 % 10
num1 = num1 // 10
d2 = num2 % 10
num2 = num2 // 10
a3 = (d1 + d2) % 10

print(f"{a3*1000 + b3*100 + c3*10 + d3}")
