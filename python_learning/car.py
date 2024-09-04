
class Car:
    def __init__(self, model, year, color, for_sale):       # constructor
        self.model = model
        self.year = year
        self.color = color
        self.for_sale = for_sale

    
    def drive(self):
        print("You drive the car")


    def stop(self):
        print(f"You stop {self.model}")