# python weight converter


weight = float(input("Enter you weight"))
unit = input("Kilograms or Pounds? ")


if unit == 'K':
    weight = weight * 2.20462
    print(f"your weight is: {weight} {unit}")
elif unit == 'P':
    weight = weight / 2.20462
    print(f"your weight is: {weight} {unit}")

else:
    print(f"{unit} is not a valid unit")

