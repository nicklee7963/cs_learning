
friends = 0

# friends = friends + 1
# friends += 1 
# friends = friends - 2
# friends -= 2 
# friends = friends * 3
# friends *= 3
# friends = friends / 2
# friends /=2
# friends = friends ** 2
# friends **= 2
#remainder = friends % 2



x = 3.14
y = -4
z = 5

#result = round(x)    :3
#result = abs(y)      :4
#result = pow(4,3)    :64
#result = max(x, y, z)   :5
#result = min(x, y, z)   :-4




import math 


#print(math.pi)
#print(math.e)
#result = math.sqrt(9)     :3
#result = math.ceil(9.1)    :10
#result = math.floor(9.9)   :9

#circumference

radius = float(input("Enter a radius of a circle: "))

circumference = 2 * math.pi * radius

print(f"The circumference is: {round(circumference,2)}cm")


#area

radius = float(input("Enter the radius of a circle:"))

area = math.pi * pow(radius,2)

print(f"the area of the circle is: {round(area,2)}cm2")

#triangle

a = int(input("Enter the first length"))

b = int(input("Enter the second length"))

c = math.sqrt(pow(a,2) + pow(b,2))

print(f"side c = {c}")