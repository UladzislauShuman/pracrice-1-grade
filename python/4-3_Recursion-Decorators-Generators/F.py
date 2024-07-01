def merge(left, right):
    result = []
    L = r = 0

    while L < len(left) and r < len(right):
        if left[L] < right[r]:
            result.append(left[L])
            L += 1
        else:
            result.append(right[r])
            r += 1
    result += left[L:]
    result += right[r:]
    return result


def merge_sort(lst):
    if len(lst) <= 1:
        return lst
    mid = len(lst) // 2
    left = lst[:mid]
    right = lst[mid:]

    left = merge_sort(left)
    right = merge_sort(right)

    return merge(left, right) 