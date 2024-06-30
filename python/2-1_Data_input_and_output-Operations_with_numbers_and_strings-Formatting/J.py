name = input()
num = int(input())
temp = num

index = num % 10
num = num // 10

bed = num % 10
num = num // 10

group = num

print("Группа №", group, ".", sep="")
print(index, ". ", name, ".", sep="")
print("Шкафчик: ", temp, ".", sep="")
print("Кроватка: ", bed, ".", sep="")
