for y in range(3):

    for x in range(1, 10):
        print(x, end="")
    print()



rows = int(input("Enter the # of rows: "))
colum = int(input("Enter the number of colums: "))
symbol = input("Enter the symbol: ")

for x in range(rows):

    for y in range(colum):
        print(f"{symbol}", end='')
    print()

