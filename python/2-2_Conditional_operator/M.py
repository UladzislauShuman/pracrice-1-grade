a = int(input())
b = int(input())
c = int(input())

if (a % 10 == b % 10) and (b % 10 == c % 10):
    print(str(a % 10))
elif (a // 10 % 10 == b // 10 % 10) and (b // 10 % 10 == c // 10 % 10):
    print(str(a // 10 % 10))