size = int(input())
ceil_w = int(input())
str_len = size * ceil_w + (size - 1)

for row in range(size):
    for column in range(size):
        print(f'{((row + 1) * (column + 1)): ^{ceil_w}}', end='')
        if column == size - 1:
            print()
        else:
            print('|', end='')
    if row + 1 != size:
        print('-' * str_len)