slices = int(input())

print('А Б В')
for a in range(1, slices + 1):
    for b in range(1, slices + 1):
        for c in range(1, slices + 1):
            if a + b + c == slices:
                print(a, b, c) 