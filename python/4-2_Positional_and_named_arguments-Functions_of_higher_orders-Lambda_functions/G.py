data = []
odds = []
evens = []


def enter_results(*results):
    global data, odds, evens
    data.extend(list(results))
    odds = data[::2]
    evens = data[1::2]


def get_sum():
    return round(sum(odds), 2), round(sum(evens), 2)


def get_average():
    return round(sum(odds) / len(odds), 2), round(sum(evens) / len(evens), 2)