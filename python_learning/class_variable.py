# class variables = shared among all instances of a class
#                   Defined outside the constructor
#                   Allow you to share date among all objects created from that class

class Student:
    

    class_year = 2024
    def __init__(self, name, age):
        self.name = name
        self.age = age


student1 = Student("sponge", 30)
student2 = Student("patrick", 35)



print(student2.age)
print(student1.class_year)
print(Student.class_year)

