
unit = input("is this temperature in celsius or fahrenheit (C/F): ")
temp = float(input("Enter the temperature: "))

if unit == 'C':
    temp = round(temp * 9 /5,1) + 32
    print(f"the temperature in fahrenheit is {temp}°F")
elif unit == 'F':
    temp = round((temp - 32 ) * 5 / 9, 1)
    print(f"the temperature in celsius is {temp}°C" )
else:
    print(f"{unit} is an invalid unit of measurement.")