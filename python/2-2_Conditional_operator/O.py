A = int(input())
B = int(input())

a = A // 10 
b = A % 10

c = B // 10 
d = B % 10

Max = max(a, b, c, d)
Min = min(a, b, c, d)
Mid = (a + b + c + d - Max - Min) % 10

print(f"{Max}{Mid}{Min}") 