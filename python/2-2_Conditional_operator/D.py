P = int(input())
V = int(input())
T = int(input())

Max = max(P, T, V)

if P == Max:
    print("1. Петя")
    Max = max(T, V)
elif V == Max:
    print("1. Вася")
    Max = max(P, T)
elif T == Max:
    print("1. Толя")
    Max = max(P, V)

if P == Max:
    print("2. Петя")
    Max = min(T, V)
elif V == Max:
    print("2. Вася")
    Max = min(P, T)
elif T == Max:
    print("2. Толя")
    Max = min(P, V)

if P == Max:
    print("3. Петя")
elif V == Max:
    print("3. Вася")
elif T == Max:
    print("3. Толя")

