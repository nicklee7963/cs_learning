import random

def spin_row():
    symbols = ["😎", "😀", "😁", "🤣"]

    # results = []

    # for symbol in range(3):
    #     results.append(random.choice(symbols))
    # return results
    return [random.choice(symbols) for _ in range(3)]  # use list comprehension
def print_row(row):
    print("============")
    print(" | ".join(row))
    print("============")
    

def get_payout(row, bet):
    if row[0] == row[1] == row[2]:
        if row[0] == "😎":
            return bet * 3
        elif row[0] == "😀":
            return bet * 4
        elif row[0] == "😁":
            return bet * 5
        elif row[0] == "🤣":
            return bet * 6
    else:
        return 0
        
def main():
    balance = 100
    print("=======================")
    print("Welcome to python slot")
    print("Symbol: 😎 😀 😁 🤣")
    print("=======================")

    while balance > 0:
        print(f"Current balance: ${balance:.2f}")

        bet = input("Place your bet: ")

        if not bet.isdigit():
            print("please enter a valid number")
            continue
        bet = int(bet)
        
        if bet > balance:
            print("Insufficient funds")
            continue

        if bet <= 0:
            print("That must be greater than 0")
            continue

        balance -= bet

        row = spin_row()
        print("Spinning...")
        print()
        print_row(row)
        pay_out = get_payout(row, bet)
        if pay_out > 0:
            print(f"You won ${pay_out:.2f}")
        else:
            print("Sorry you lost ")
        balance += pay_out

        play_again = input("Do you want to play again? (Y/N): ")
        if play_again != 'Y':
            break

print("Thanks for your playing!")    
if __name__ == "__main__":
    main()
