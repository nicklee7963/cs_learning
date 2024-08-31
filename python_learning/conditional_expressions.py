# conditional expression = a one line shortcut for the if-else statement(ternary operator)
# print or assign of two values based on a condition
# x if condition else y


num = 6
a = 6
b = 7
age = 25
temperature = 30
user_role = "admin"

#print("Positive" if num > 0 else "Negative")
#result = "even" if num % 2 == 0 else "odd"
# max_num  = a if a > b else b
# min_num = a if a < b else b
# status = "Adult" if age >= 18 else "Child"

# weather = "Hot" if temperature > 20 else "Cold"
access_level = "full access" if user_role ==  "admin" else "Limited Access"


print(access_level)
