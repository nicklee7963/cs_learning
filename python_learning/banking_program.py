

def show_balance(balance):
    print(f"Your balance is ${balance:.2f}")


def deposit(balance):
    amount = float(input("Enter the amount to deposit: "))
    if amount < 0:
        print("that is not a valid amount")
        return 0
    else:
        return amount


def withdraw(balance):
    amount = float(input("Enter the amount to withdraw: "))

    if amount > balance:
        print("insufficient funds")
        return 0
    elif amount < 0:
        print("amount must be greater than 0")
        return 0
    else:
        return amount


def main():
    balance = 0
    is_running = True


    while is_running:
        print("===========================")
        print("===== banking Program =====")
        print("Banking Program")
        print("1. Show Balance")
        print("2. Deposit")
        print("3. Withdraw")
        print("4. Exit")


        choice = int(input("Enter your choice: "))

        match choice:
            case 1:
                show_balance(balance)
            case 2:
                balance += deposit(balance)
            case 3:
                balance -= withdraw(balance)
            case 4:
                is_running = False
            case _:
                print("that is not a valid choice")

    print("===========================")
    print("Thank you for using our banking program.Goodbye!")


if __name__ == "__main__":
    main()