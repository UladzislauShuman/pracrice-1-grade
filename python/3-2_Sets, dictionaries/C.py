
Set = set()
for i in range(1, int(input()) + 1):
    Set = Set.union(set(input().split()))
print('\n'.join(Set))


