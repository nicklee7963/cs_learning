#typecasting = the process of converting variable from one data type to another
#str()  int()  float()  bool()


name = "nick"
age = 20
gpa = 3.2
is_student = True

age = str(age)
# age += 1 error
age += '1'
print(age)
print(type(age))



name = bool(name)
print(name)
name = ''
print(bool(name))