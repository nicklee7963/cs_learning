#exercise 2 shopping cart program using input

item = input("What item would you like to buy?: ")
price = float(input("What is the price?: "))
quantity = int(input("How many would you like?: "))
total = price* quantity


print(f"You have bought {quantity} * {item}/s")
print(f"Your total is: {total}")
print(total)
