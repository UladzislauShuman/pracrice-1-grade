def answer(func):
    def fun(*args, **kwargs):
        return f'Результат функции: {func(*args, **kwargs)}'
    return fun