P = int(input())
V = int(input())
T = int(input())

Max = max(P, T, V)

if P == Max:
    print("          Петя          ")
    Max = max(T, V)
elif V == Max:
    print("          Вася          ")
    Max = max(P, T)
elif T == Max:
    print("          Толя          ")
    Max = max(P, V)

if P == Max:
    print("  Петя                    ")
    Max = min(T, V)
elif V == Max:
    print("  Вася                    ")
    Max = min(P, T)
elif T == Max:
    print("  Толя                    ")
    Max = min(P, V)

if P == Max:
    print("                  Петя")
elif V == Max:
    print("                  Вася")
elif T == Max:
    print("                  Толя")

print("   II      I      III   ")