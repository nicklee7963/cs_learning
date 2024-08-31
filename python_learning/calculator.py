# Python calculator

operator = input("Enter an operator (+ - * /)")
num1 = float(input("Enter the 1st num: "))
num2 = float(input("Enter the 2nd num: "))

if operator == '+':
    print(f"{num1} {operator} {num2} = {num1+num2}")
elif operator == '-':
    print(f"{num1} {operator} {num2} = {num1-num2}")
elif operator == '*':
    print(f"{num1} {operator} {num2} = {num1*num2}")
elif operator == '/':
    print(f"{num1} {operator} {num2} = {num1/num2}")
else:
    print(f"{operator} is not valid")


