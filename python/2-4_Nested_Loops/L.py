h = int(input())
w = int(input())

cell_w = len(str(w * h))

num = 1
for i in range(h):
    for j in range(w):
        print(f'{num:>{cell_w}}', end=' ')
        num += 1
    print()