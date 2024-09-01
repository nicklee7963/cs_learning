# collection = 'single "variable" used to store multiple values
#   list = [] ordered and changeable. Duplicates OK
#   Set = {} unordered and immutable, but add/remove ok no duplicates
#   tuple = () ordered and unchangeable, Duplicates ol faster





####### LIST #######
fruits = ["apple", "orange", "banana", "coconut"]
# print(dir(fruits))   #check what command can use
# print(help(fruits))
# print(fruits[0:3])
# print(len(fruits)) #return how many elements
# print("apple" in fruits) #check if the element is inside

fruits[0] = "pineapple"
fruits.append("apple")    # append the element to the end of the list
fruits.remove("orange")   # remove the element 
fruits.insert(3,"orange")  # insert element in the specific position
fruits.sort() #sort the list in a sequence of alphabet
fruits.reverse()  #reverse the list
# fruits.clear()
print(fruits.index("apple"))
fruits.append("pineapple")
print(fruits.count("pineapple"))


for fruit in fruits:
    print(fruit)





###### SET ######
fruits = {"apple", "orange", "banana", "coconut", "coconut"}   # no duplicate
print(fruits)    #because it's not ordered so every run will produce random sequence
print(len(fruits))
print("apple" in fruits)
fruits.add("pineapple")
fruits.remove("apple")
fruits.pop()    #remove randomly
fruits.clear()


print(fruits)



###### tuple ######
fruits = ("apple", "orange", "coconut", "banana", "coconut")
print(fruits)
print(fruits.count("coconut"))
print("apple" in fruits)

print(fruits.index("apple"))