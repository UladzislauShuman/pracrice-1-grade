class Point:
    
    def __init__(self, x, y):
        self.x = x
        self.y = y
    
    def move(self, x_, y_):
        self.x = self.x + x_
        self.y = self.y + y_

    def length(self, point):
        return round(((self.x - point.x) ** 2 + (self.y - point.y) ** 2) ** 0.5, 2)


class PatchedPoint(Point):
    def __init__(self, *args):
        match len(args):
            case 0:
                super().__init__(0, 0)
            case 1:
                super().__init__(*args[0])
            case 2:
                super().__init__(*args)
                
    def __str__(self):
        return f"({self.x}, {self.y})"

    def __repr__(self):
        return f"PatchedPoint({self.x}, {self.y})"