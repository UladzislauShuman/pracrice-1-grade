a = float(input())
b = float(input())
c = float(input())

Max = max(a, b, c)
Min = min(a, b, c)
Mid = a + b + c - Max - Min

if Max ** 2 == Min ** 2 + Mid ** 2:
    print("100%")
elif (Max ** 2 - Min ** 2 - Mid ** 2) / (-2 * Min * Mid) < 0:
    print("велика")
else:
    print("крайне мала")