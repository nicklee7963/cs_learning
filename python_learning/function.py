# def happy_birthday(name, age):


#     print(f"happy birthday to you {name}")

#     print(f"happy birthday to you, you are {age} years old")


# happy_birthday(age = "John",name = 123)
def display_invoice(username, amount, due_date):
    print(f"hello {username}")
    print(f"your bill of ${amount:.2f} is due: {due_date}")

display_invoice("John Doe", 100.5, "2022-12-31")



def add_numbers(a, b):
    return a+b

def subtract_numbers(a, b):
    return a-b


def multiply_numbers(a,b):
    return a*b


def divide_numbers(a,b):
    return a/b



print(add_numbers(1,2))
print(subtract_numbers(3,5))
print(multiply_numbers(4,6))
print(divide_numbers(8,2))


def create_name(first, last):
    first = first.capitalize()
    last = last.capitalize()
    return first + " " + last


full_name = create_name("john", "doe")
print(full_name)
