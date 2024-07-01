import math


def gcd(*array):
    lst = list(array)
    while len(lst) != 1:
        a = lst[0]
        b = lst[1]
        temp = math.gcd(a, b)
        lst.pop(0)
        lst.pop(0)
        lst.insert(0, temp)
    return lst[0]
