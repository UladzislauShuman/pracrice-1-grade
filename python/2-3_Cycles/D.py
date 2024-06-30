start = int(input())
finish = int(input())
k = 0
if start > finish:
    k = -1
else:
    k = 1

for i in range(start, finish + k, k):
    print(i, end=" ")
