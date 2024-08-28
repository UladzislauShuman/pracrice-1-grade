import numpy


def make_board(N):
    board = numpy.zeros((N, N), dtype="int8")
    board[::2, ::2] = 1
    board[1::2, 1::2] = 1
    return board 
