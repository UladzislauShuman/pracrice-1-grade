import numpy


def multiplication_matrix(N):
    return numpy.array([[i * j for i in range(1, N + 1)] for j in range(1, N + 1)])
