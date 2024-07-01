in_ = input()
n = int(input())

with open(in_, encoding='UTF-8') as file_in:
    items1 = [item for item in file_in.read().split("\n")]

for item in items1[-1 - n:-1:1]:
    print(f"{item}")
