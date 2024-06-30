sum = 0

while (price := float(input())) != 0:
    if price >= 500:
        sum = sum + price * 0.9
    else:
        sum = sum + price

print(str(sum)) 