import random


low = int(input("Enter the lower limit: "))
high = int(input("Enter the upper limit: "))
answer = random.randint(low, high)
playtimes = 0
while True:
    playtimes+=1
    number = int(input(f"Guess a number between {low} and {high}: "))
    if number == answer:
        print("Congratulations! You guessed the correct number")
        print(f"you tried {playtimes} times")
        break
    elif number < answer:
        print("Too Low! Try again")
        low = number+1
    elif number > answer:
        print("Too High! Try again")
        high = number -1
