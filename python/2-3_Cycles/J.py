x = 0
y = 0

while (name := input()) != "СТОП":
    n = int(input()) 
    match name:
        case 'СЕВЕР':
            y = y + n
        case 'ЮГ':
            y = y - n
        case 'ЗАПАД':
            x = x - n
        case 'ВОСТОК':
            x = x + n

print(y)
print(x)
