N = int(input())

for i in range(1, N + 1):
    line = input()
    if "зайка" not in line:
        print("Заек нет =(")
    else:
        print(str(line.find("зайка") + 1))
