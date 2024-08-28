import pandas
import numpy


def values(func, start, end, step):
    index = numpy.arange(start, end + step, step)
    return pandas.Series(map(func, index), index=index, dtype='float64')


def min_extremum(data):
    return min(data[data == min(data)].index)


def max_extremum(data):
    return max(data[data == max(data)].index)

