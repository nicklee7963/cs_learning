foods = []
prices = []
total = 0

while True:
    food = input("Enter a food to buy ( q to quit ): ")
    if food.lower() == 'q':
        break
    else:
        price = float(input("Enter the prices of " + food))
        foods.append(food)
        prices.append(price)




print("-----your cart-----")

for food in foods:
    print(food,end=' ')
    
for price in prices:
    total += price
print()
print(f"total price : {total}")

