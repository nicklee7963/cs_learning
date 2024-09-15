# decorator = a function that extends the behavior of another function
#             without modifying the base function
#             Pass the base function as an argument to the decorator

def add_sprinkles(func):                     #create decorator
    def wrapper():
        func()

    return wrapper


def get_ice_cream():
    print("here is your ice cream")

