#input() = a function that prompts the user to enter data returns the entered data as a string



name = input("What is your name?:")
age = int(input("How old are you?:"))

age = age + 1

print(f"hello {name}")
print("Happy birthday")
print(f"you are {age} years old")