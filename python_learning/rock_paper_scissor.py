import random


options = ("rock", "paper", "scissors")


while True:
    player = None
    computer = random.choice(options)
    player = input("Enter you choice (rock, scissors, or paper): ")
    if player not in options: 
        print("Invalid choice. Please try again.")
        player = input("Enter you choice (rock, paper, or paper): ")

    print(f"Player: {player}")
    print(f"Computer: {computer}")

    if player == computer:
        print("It's a tie!")
    elif player == "rock" and computer == "scissors":
        print("Player wins!")
    elif player == "scissors" and computer == "paper":
        print("Player wins!")
    elif player == "paper" and computer == "rock":
        print("Player wins!")
    else:
        print("Computer wins!")
    play_again = input("Do you want to play again? (yes/no): ")
    if not play_again.lower() == "yes":
        break
print("Thanks for playing!")