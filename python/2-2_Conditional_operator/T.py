a = input()
b = input()
c = input()

if a > b:
    a, b = b, a
if a > c:
    a, c = c, a
if b > c:
    b, c = c, b

if 'зайка' in a:
    print(a, len(a))
elif 'зайка' in b:
    print(b, len(b))
elif 'зайка' in c:
    print(c, len(c))