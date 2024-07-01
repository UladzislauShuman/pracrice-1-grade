def result_accumulator(func):
    queue = []

    def wen(*args, method='accumulate', **kwargs):
        queue.append(func(*args, **kwargs))
        if method == 'drop':
            result = list(queue)
            queue.clear()
            return result
    return wen