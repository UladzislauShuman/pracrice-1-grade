from requests import get
from sys import stdin

adress = 'http://' + input()
ways = [i.strip() for i in stdin]
res = 0
for way in ways:
    res += sum(get(adress + way).json())
print(res)
