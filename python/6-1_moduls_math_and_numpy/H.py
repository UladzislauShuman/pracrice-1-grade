import numpy as np


def snake(M, N, direction='H'):
    snake = np.zeros((N, M), dtype=np.int16)
    
    if direction == 'H':
        for i in range(N):
            if i % 2 == 0:
                snake[i, :] = np.arange(1, M + 1) + i * M
            else:
                snake[i, :] = np.arange(M, 0, -1) + i * M
    else:
        for j in range(M):
            if j % 2 == 0:
                snake[:, j] = np.arange(1, N + 1) + j * N
            else:
                snake[:, j] = np.arange(N, 0, -1) + j * N
    return snake

