def can_eat(pos1, pos2):
    return {abs(pos1[0] - pos2[0]), abs(pos1[1] - pos2[1])} == {1, 2}