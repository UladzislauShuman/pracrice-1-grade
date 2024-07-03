class Rectangle:

    def __init__(self, point1, point2):
        self.point1 = [min(point1[0], point2[0]), min(point1[1], point2[1])]
        self.point2 = [max(point1[0], point2[0]), max(point1[1], point2[1])]

    def perimeter(self):
        return round(2 * (abs(self.point2[0] - self.point1[0]) + abs(self.point2[1] - self.point1[1])), 2)

    def area(self):
        return round(abs(self.point2[0] - self.point1[0]) * abs(self.point2[1] - self.point1[1]), 2)

    def get_pos(self):
        return round(min(self.point1[0], self.point2[0]), 2), round(max(self.point1[1], self.point2[1]), 2)

    def get_size(self):
        return round(abs(self.point2[0] - self.point1[0]), 2), round(abs(self.point2[1] - self.point1[1]), 2)

    def move(self, dx, dy):
        self.point1[0] += dx
        self.point2[0] += dx
        self.point1[1] += dy
        self.point2[1] += dy

    def resize(self, width, height):
        self.point2[0] = self.point1[0] + width
        self.point1[1] = self.point2[1] - height