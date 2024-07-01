from itertools import cycle, islice
kashy = [input() for i in range(int(input()))]
n = int(input())
print('\n'.join(islice(cycle(kashy), n)))