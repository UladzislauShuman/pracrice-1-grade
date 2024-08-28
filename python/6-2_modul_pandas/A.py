import pandas as pd


def length_stats(line):
    
    line = ''.join(i for i in line if i.isalpha() or i == ' ')
    mas = sorted(set(line.lower().split()))
    res = pd.Series([len(i) for i in mas], index=mas)
    
    return res 