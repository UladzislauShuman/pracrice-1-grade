import pandas as pd


def length_stats(line):
    line = ''.join(i for i in line if i.isalpha() or i == ' ')
    mas = sorted(set(line.lower().split()))
    masOdd = [i for i in mas if len(i) % 2]
    masEven = [i for i in mas if not len(i) % 2]
    odd = pd.Series([len(i) for i in masOdd], index=masOdd, dtype='int64')
    even = pd.Series([len(i) for i in masEven], index=masEven, dtype='int64')
    return odd, even