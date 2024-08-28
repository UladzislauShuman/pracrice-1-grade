import numpy


def stairs(v):
    matrix = numpy.zeros((len(v), len(v)), dtype=int)
    for i in range(len(v)):
        matrix[i] = numpy.roll(v, i)
    return matrix
