string = input()
for index, value in enumerate(string.split()):
    print(f"{index + 1}. {value}")