def hello(greeting, title, first, last):
    print(f"{greeting} {title} {first} {last}")


hello( title = "professor", first = "John", last="Doe", greeting = "Hello")


for x in range(1,11):
    print(x, end=" ")
     

print("a", "b", "c", sep="|")


def get_phone(country_code, area, first, last):
    return f"{country_code}-{area}-{first}-{last}"

phone_num = get_phone(country_code=1, area = 123, first = 456, last = 789)
print(phone_num)


