# example 1
# name = input("Enter your name:")

# while name == "":
#     print("You did not enter a name.")
#     name = input("Enter your name:")

# print(f"Hello, {name}")


#example 2
# age = int(input("Enter your age:"))

# while age < 0:
#     print("Age can't be negative.")
#     age = int(input("Enter your age: "))
# print(f"You are {age} years old.")


# example 3
# food = input("Enter a food you like (q to quit):")

# while not food == "q":
#     print(f"You like {food}")
#     food = input("Enter a food you like (q to quit):")

# print("bye")
    

# example 4
num = input("Enter a number between 1 and 10: ")

while not 1 <= int(num) <= 10:
    num = input("Enter a number between 1 and 10: ")

print(f"you entered {num}")