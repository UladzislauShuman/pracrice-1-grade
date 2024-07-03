def only_positive_even_sum(*args):
    for item in args:
        if not isinstance(item, int):
            raise TypeError
    for item in args:
        if item <= 0 or item % 2 != 0:
            raise ValueError
    return sum(args)