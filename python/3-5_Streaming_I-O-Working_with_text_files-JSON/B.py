from sys import stdin

ans = 0

lines = [line.rstrip('\n') for line in stdin.readlines()]

for line in lines:
    name, then, now = line.split()
    ans += int(now) - int(then)

print(round(ans / len(lines)))