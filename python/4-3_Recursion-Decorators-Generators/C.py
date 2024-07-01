def make_equation(*num):
    if len(num) == 1:
        return f"{num[0]}"
    return f"({make_equation(*num[:-1])}) * x + {num[-1]}"
    