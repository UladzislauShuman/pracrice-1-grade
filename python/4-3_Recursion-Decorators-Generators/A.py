def recursive_sum(*num):
    if len(num) == 0:
        return 0
    return num[0] + recursive_sum(*num[1:])