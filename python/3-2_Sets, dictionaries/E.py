Set = set()

M = int(input())
Ov = int(input())

for i in range(0, M + Ov):
    name = input()
    if name in Set:
        Set.remove(name)
    else:
        Set.add(name)
if Set:
    print(len(Set))
else:
    print('Таких нет')