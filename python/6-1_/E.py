import math


def from_polar(r, phi):
    x = r * math.cos(phi)
    y = r * math.sin(phi)
    return (x, y)


(x, y) = (float(t) for t in input().split())
(r, phi) = (float(t) for t in input().split())
print(math.dist((x, y), from_polar(r, phi)))
