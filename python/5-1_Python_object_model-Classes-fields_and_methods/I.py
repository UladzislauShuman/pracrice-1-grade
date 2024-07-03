class Queue:
    def __init__(self):
        self.queue = []

    def push(self, elem):
        self.queue.append(elem)

    def pop(self):
        item = None
        if not self.is_empty():
            item, *self.queue = self.queue
        return item

    def is_empty(self):
        return self.queue == []