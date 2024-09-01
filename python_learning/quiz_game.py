questions = ("is qq a poop?","is qq annoying?","is qq a dog?"
             ,"is qq boring?", " is qq good at coding?")

options = (("O","X"),("O","X"),("O","X"),("O","X"),("O","X"))

answers = ("O","O","O","O","X")

guesses = []

score = 0

question_num = 0

for question in questions:
    print("-------------")
    print(question)
    for option in options[question_num]:
        print(option)
    guesses.append(input("Your answer: ").upper())
    if guesses[question_num]==answers[question_num]:
        score+=1
    question_num+=1

print(f"Your final score is {score}/{question_num}")

