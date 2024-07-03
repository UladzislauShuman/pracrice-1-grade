Status = {
    "Junior": 10,
    "Middle": 15,
    "Senior": 20 
}


class Programmer:

    def __init__(self, name, status, hours=0):
        self.name = name
        self.status = status
        self.hours = hours
        self.money = Status[self.status]
        self.allMoney = 0

    def work(self, time):
        self.hours += time
        self.allMoney += time * self.money
    
    def rise(self):
        if self.status == "Junior":
            self.status = "Middle"
            self.money = Status[self.status]
        elif self.status == "Middle":
            self.status = "Senior"
            self.money = Status[self.status]
        else:
            self.money += 1

    def info(self):
        return f"{self.name} {self.hours}ч. {self.allMoney}тгр."