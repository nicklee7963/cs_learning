
name = input("Enter your full name: ")

#result = len(name)       give you the length of your input

#result = name.find(" ")  give you the position of the first word you want to find

#result = name.rfind("q") give the position of the last word you find    if no word to be find return -1

#result = name.capitalize()  turn the first char to uppercase

#result = name.upper()  turn all the letter to upper

#result = name.lower()  turn all the letter to lower

#result = name.isdigit()   return true when string only include digit

result = name.isalpha()   #return true when string only contains letter

#result = name.count("-")   count how many args are there in string

#result = name.replace("-",'/')    replace the letter to your assign letter

print(result)