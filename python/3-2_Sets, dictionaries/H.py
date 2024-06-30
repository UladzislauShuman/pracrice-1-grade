Map = dict()
for i in range(1, int(input()) + 1):
    line = input()
    name, *porridges = line.split()  
    for porridge in porridges:
        if porridge not in Map:
            Map[porridge] = [name] 
        else:
            Map[porridge].append(name)

type = input()

if type not in Map:
    print("Таких нет")
else:
    names = Map[type]  
    names.sort() 
    for name in names:
        print(name)

