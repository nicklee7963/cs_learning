class Animal:
    def __init__(self, name):
        self.name = name
    def eat(self):
        print(f"this {self.name} is eating")

    def sleep(self):
        print(f"this {self.name} is sleeping")
class Prey(Animal):
    def flee(self):
        print(f"this {self.name} is fleeing") 


class Predator(Animal):
    def hunt(self):
        print(f"This {self.name} is hunting")

class Rabbit(Prey, Animal):
    pass

class Hawk(Predator, Animal):
    pass

class Fish(Prey, Predator, Animal):
    pass

rabbit = Rabbit("rabbit")
hawk = Hawk("hawk")
fish = Fish("fish")

rabbit.sleep()