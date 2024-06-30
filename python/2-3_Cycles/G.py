A = int(input())
B = int(input())
a = A
b = B
while a != 0 and b != 0:
    if a > b:
        a = a % b 
    else:
        b = b % a 

print(str((A * B) // max(a, b)))