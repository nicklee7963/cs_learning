

def add(a,b):
    return a+b



print(add(1,2))

###### *args ######
def add(*args):         #turn the argument list into a tuple
    total = 0
    for arg in args:
        total+=arg
    return total

print(add(1,2,3,4,5))


def display_name(*names):
    for name in names:
        print(name, end=" ")

display_name("nick", "lee", "software engineer")



###### **kwargs ######
def print_address(**kwargs):    #turn the keyword arguments into a dictionary
    for key, value in kwargs.items():
        print(f"{key}: {value}")

print_address(street="123", 
              city="new work",
              state ="MI",
              zip="54321")

def shipping_label(*args, **kwargs):
    for arg in args:
        print(arg, end=" ")
    print()
    for value in kwargs.values():
        print(value, end=" ")

shipping_label("nick", "lee", "software engineer",
               street = "123",
               city = "taipei")

