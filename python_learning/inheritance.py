# inheritance = allows a class to inherit attributes and methods from another class
#               help with code reusability and extensibility
#               class Child(Parent)


class Animal:
    def __init__(self, name):
        self.name = name
        self.is_alive = True

    def eat(self):
        print(f"{self.name} is eating")

    def sleep(self):
        print(f"{self.name} is sleeping")


class Dog(Animal):
    def speak(self):
        print("woof")



class Cat(Animal):
    def speak(self):
        print("meow")




class Mouse(Animal):
    def speak(self):
        print("squeek")


dog = Dog("Scooby")
cat = Cat("hello")
mouse = Mouse("Mickey")

print(dog.name)
print(dog.is_alive)
dog.speak()