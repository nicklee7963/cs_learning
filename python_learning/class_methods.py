# class methods = allow operation related


class Student:

    count = 0
    total_gpa = 0
    def __init__(self, name, gpa):
        self.name = name
        self.gpa = gpa
        Student.count += 1
        Student.total_gpa += gpa
    # instance method
    def get_info(self):
        return f"{self.name} {self.gpa}"
    

    @classmethod
    def get_count(cls):
        return f"total # of students: {cls.count}"

    @classmethod
    def get_average(cls):
        if cls.count ==0:
            return 0

        else:
            return f"{cls.total_gpa/cls.count:.2f}"
student1 = Student("Nick", 3.2)
student2 = Student("patrick", 2.0)
student3 = Student("sandy", 4.0)
print(Student.get_count())
print(Student.get_average())
    


    
