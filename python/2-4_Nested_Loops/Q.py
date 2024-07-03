count = 0

for i in range(int(input())):
    num = int(input())
    orig_num = str(num)
    rev_num = str(num)[::-1]
    if orig_num == rev_num:
        count += 1    
print(count)