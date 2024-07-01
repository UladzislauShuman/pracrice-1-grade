def same_type(func):
    def wrap(*args):
        first_type = type(args[0])
        if all(type(item) is first_type for item in args[1:]):
            return func(*args)
        else:
            print("Обнаружены различные типы данных")
    return wrap