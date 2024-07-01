def merge(array1, array2):
    array = []

    pos1 = 0
    pos2 = 0
    while pos1 < len(array1) and pos2 < len(array2):
        if array1[pos1] > array2[pos2]:
            array.append(array2[pos2])
            pos2 = pos2 + 1
        else:
            array.append(array1[pos1])
            pos1 = pos1 + 1
    array.extend(array1[pos1:])
    array.extend(array2[pos2:])

    return tuple(array)