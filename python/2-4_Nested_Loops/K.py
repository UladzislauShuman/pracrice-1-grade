count = int(input())

simple_counter = 0

for i in range(count):
    if (number := int(input())) > 1:
        simple = True
        divider = 2
        while divider <= int(number ** 0.5) and simple:
            if number % divider == 0:
                simple = False
                break
            else:
                divider = divider + 1
        if simple is True:
            simple_counter = simple_counter + 1

print(simple_counter)