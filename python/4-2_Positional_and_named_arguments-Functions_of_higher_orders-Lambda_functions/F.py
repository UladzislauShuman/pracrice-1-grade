
Menu = {
    "Эспрессо": {"coffee": 1},
    "Капучино": {"coffee": 1, "milk": 3},
    "Макиато": {"coffee": 2, "milk": 1},
    "Кофе по-венски": {"coffee": 1, "cream": 2},
    "Латте Макиато": {"coffee": 1, "milk": 2, "cream": 1},
    "Кон Панна": {"coffee": 1, "cream": 1},
}

in_stock = {}


def order(*coffees_):
    global in_stock

    temp_stock = in_stock
    for coffee_ in coffees_:
        for item in Menu[coffee_]:
            if Menu[coffee_].get(item, 0) > in_stock[item]:
                break
        else:
            for item in Menu[coffee_]:
                in_stock[item] -= Menu[coffee_][item]
            return coffee_
                
    if in_stock == temp_stock:
        return "К сожалению, не можем предложить Вам напиток"
