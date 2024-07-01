N = int(input()) 
M = int(input()) 
K1 = int(input()) 
K2 = int(input()) 

N2 = N * (M - K1) // (K2 - K1)
N1 = N - N2

print(str(N1), str(N2))
