# dictionary =     a collection of {key:value} pairs ordered and changeable, No duplicates
capitals = {"USA": "Washington D.C.",
            "China": "Beijing",
            "India": "New Delhi",
            "Russia": "Moscow"}



print(capitals.get("USA", "country not found"))



capitals.update({"Germany": "Berlin"})
capitals.update({"USA": "Detroit"})
capitals.pop("China")
capitals.popitem()       # remove the latest inserted item
print(capitals)


keys = capitals.keys()
print(keys)
for key in capitals.keys():
    print(key)


values = capitals.values()
print(values)
for value in capitals.values():
    print(value)

items = capitals.items()
print(items)
for key, value in capitals.items():
    print(f"{key}:{value}")
