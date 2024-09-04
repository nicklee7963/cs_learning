import random

words = ("apple", "banana", "orange", "coconut", "pineapple")

hangman_art = {0: ("   ",
                   "   ",
                   "   "),
               1: (" o ",
                   "   ",
                   "   "),
               2: (" o ",
                   " | ",
                   "   "),
               3: (" o ",
                   "/| ",
                   "   "),
               4: (" o ",
                   "/|\\",
                   "   "),
               5: (" o ",
                   "/|\\",
                   "/   "),
               6: (" o ",
                   "/|\\",
                   "/ \\"),}


def display_man(wrong_guesses):
    for line in hangman_art[wrong_guesses]:
        print(line)

def display_hint(hint):
    print(" ".join(hint))

def display_answer(answer):
    print(" ".join(answer))

def main():
    answer = random.choice(words)
    hint = ["_"] * len(answer)
    wrong_guesses = 0
    guessed_letters = set()
    is_running = True

    while is_running:
        display_man(wrong_guesses)
        display_hint(hint)
        response = input("Please answer you guess: ").lower()
        if response in answer:
            for i in range(len(answer)):
                if answer[i] == response:
                    hint[i]= response
                    guessed_letters.add(response)
        else:
            wrong_guesses+=1
        if wrong_guesses >= 6:
            print("you lose")
            break
        elif guessed_letters == set(answer):
            print("you win")
            break

    display_answer(answer)


if __name__ == "__main__":
    main()