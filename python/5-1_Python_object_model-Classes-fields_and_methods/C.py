class RedButton:

    def __init__(self):
        self.count_ = 0
    
    def click(self):
        self.count_ += 1
        print("Тревога!")
    
    def count(self):
        return self.count_