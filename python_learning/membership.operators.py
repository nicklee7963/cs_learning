#membership operators = used to test whether a value or variable is found in a sequence
#                    (string, list, tuple, set, or dictionary)
#                    1.in
#                    2.not in
word = "apple"

letter = input("Guess a letter in the secret word: ")

if letter in word: 
    print(f"There is a {letter}")
else: 
    print(f"{letter} was not found")


students = {"qq", "ww", "ee"}

student = input("Enter a name of a student: ")

if student in students:
    print(f"{student} is a student")
else:
    print(f"{student} is not a student")


grades = {"Sandy": "A", "Jane": "B", "Tom": "C"}

student = input("Enter a name of a student: ")

if student in grades:
    print(f"{student}'s grade is {grades[student]}")
else:
    print("Not found")




email = "nicklee7963@gmail.com"

if "@" in email and "." in email:
    print("valid email")
else:
    print("Invalid email")

