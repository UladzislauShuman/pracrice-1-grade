n = int(input()) 
c = n // 100 
b = n // 10 % 10 
a = n % 10 

Max = max(n1, n2, n3) 
Min = min(n1, n2, n3) 
Mid = (n1 + n2 + n3) - max_n - min_n 
if Min == 0: 
    print(f"{Mid}{Min} {Max}{Mid}") 
else: 
    print(f"{Min}{Mid} {Max}{Mid}")