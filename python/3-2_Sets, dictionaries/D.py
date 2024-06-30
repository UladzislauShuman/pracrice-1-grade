Manka = set()
Ovsanka = set()

M = int(input())
Ov = int(input())

for i in range(0, M):
    Manka.add(input())

for i in range(0, Ov):
    Ovsanka.add(input())
    
if len(Manka.intersection(Ovsanka)) == 0:
    print("Таких нет")
else:
    print(len(Manka.intersection(Ovsanka)))
