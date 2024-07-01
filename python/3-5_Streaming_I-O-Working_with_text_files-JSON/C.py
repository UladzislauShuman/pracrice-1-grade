from sys import stdin

for string in stdin:
    if string[0] != '#':
        print(string.split('#')[0].rstrip('\n'))