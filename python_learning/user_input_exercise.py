#validate user input exercise
# 1. username is no more than 12 characters 
# 2. username must not contain spaces
# 3. username must not contain digits

username = input(("Enter your username")) 
if len(username) > 12 : 
    print("your username is too long")
elif not username.find(" ") == -1:
    print("Your username can't contain spaces")
elif not username.isalpha(): 
    print("Your username may only contain alpha")
else:
    print(f"Welcome {username}")