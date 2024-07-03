class Point:
    
    def __init__(self, x, y):
        self.x = x
        self.y = y
    
    def move(self, x_, y_):
        self.x = self.x + x_
        self.y = self.y + y_

    def length(self, point):
        return round(((self.x - point.x) ** 2 + (self.y - point.y) ** 2) ** 0.5, 2)