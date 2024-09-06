# static methods = a method that belong to a class rather than any object from that class (instance)
#                 usually used for general utility functions
# instance methods = Best for operations on instances of the class (objects)
# static methods = Best for utility functions that do not need access to class data

class Employee: 

    def __init__(self, name, position):
        self.name = name
        self.position = position


    # instance method
    def get_info(self):
        return f"{self.name} = {self.position}"
    

    @staticmethod
    def is_valid_position(position):
        valid_positions = ["manager", "cashier", "janitor"]
        return position in valid_positions

print(Employee.is_valid_position("cook"))    #using a staticmethod
employee1 = Employee("eugene", "manager")
employee2 = Employee("nick", "teacher")
employee3 = Employee("richard", "cashier")
print(employee1.get_info())
