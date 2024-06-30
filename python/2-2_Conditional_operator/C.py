P = int(input())
V = int(input())
T = int(input())

Max = max(P, T, V)

if P == Max:
    print("Петя")
elif V == Max:
    print("Вася")
elif T == Max:
    print("Толя")