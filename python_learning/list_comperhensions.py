# list comprehension = a concise way to create lists in Python
#                      compact and easier to read than traditional loops
#                      [expression for value in iterable if condition]

## traditional loops
doubles = []
for x in range(1,11):
    doubles.append(x * 2)

print(doubles)

## list comprehension
doubles.clear()
print(doubles)
doubles = [x * 2 for x in range(1,11)]
print(doubles)


triples = [y * 3 for y in range(11)]
print(triples)


fruits = ["apple", "orange", "banana", "coconut"]
fruits = [fruit.upper() for fruit in fruits]
fruits_chars = [fruit[0] for fruit in fruits]
print(fruits)
print(fruits_chars)


numbers = [1, -2, 3, -4, 5]
positive_nums = [num for num in numbers if num >= 0]
negative_nums = [num for num in numbers if num < 0]

print(positive_nums)
print(negative_nums)





