h = int(input())
w = int(input())
ceil_w = len(str(w * h))

if h > 0 and w > 0:
    for row in range(h):
        for column in range(w):
            if (row % 2) == 0:
                num = row * w + column + 1
            else:
                num = (row + 1) * w - column
            print(f'{num:>{ceil_w}}', end=' ')
        print()