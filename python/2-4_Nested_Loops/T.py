number = int(input())

best_value = 0
best_base = 0

for base in range(10, 1, -1):
    summa = 0
    num = number
    while num > 0:
        summa += (num % base)
        num //= base
    if summa >= best_value:
        best_value = summa
        best_base = base

print(best_base)