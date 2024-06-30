Map = dict()

while (line := input()) != '':
    words = line.split()
    for item in line.split():
        if item not in Map:
            Map[item] = 1
        else:
            Map[item] += 1

for item in Map:
    print(item, Map[item])

