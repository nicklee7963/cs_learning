import moduletest

# to check all the module  print("help("module")")
# then print(help(module_name))


#three way to import
#import math
#import math as m
#from math import pi

import math as m

print(m.pi)
result = moduletest.pi
print(result)
print(moduletest.square(5))