import random


low = 1 
high = 100
options = ("rock","paper","scissors")
cards = ["2","3","4","5","6","7","8","9","10","J","Q","K","A"]

number = random.randint(low,high)
number = random.random()  # random float number between 0 and 1
option = random.choice(options)
random.shuffle(cards)

print(number)
print(option)
print(cards)
