f1 = input()
f2 = input()
out = input()

with open(f1, encoding='UTF-8') as file_in:
    items1 = set([item for item in file_in.read().split()])
with open(f2, encoding='UTF-8') as file_in:
    items2 = set([item for item in file_in.read().split()])

unique = items1 ^ items2

with open(out, 'w', encoding='UTF-8') as file_name:
    print('\n'.join(sorted(unique)), file=file_name)