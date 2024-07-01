def make_linear(lst):
    ans = []

    for item in lst:
        if isinstance(item, list):
            ans.extend(make_linear(item))
        else:
            ans.append(item)
    return ans