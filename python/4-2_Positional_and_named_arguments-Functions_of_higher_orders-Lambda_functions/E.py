def to_string(*data, sep=" ", end="\n"):
    return sep.join(str(item) for item in data) + end