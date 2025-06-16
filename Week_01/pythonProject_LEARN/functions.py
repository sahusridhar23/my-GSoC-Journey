# BUILT-IN FUNCTIONS = int(),str(),bool()

# MODULE FUNCTIONS = math
import math
print(dir(math))
#print(sqrt(4))
#here the above line will give error

from math import sqrt # specifically imports sqrt function from the math module
print(sqrt(16))

from math import * # imports all the functions
print(perm(6,2))
print("------------------------------------------------------------------------------------------------")

# USER-DEFINED FUNCTIONS
##syntax : def function_name(parameters)

def print_sum(first,second):
    print(first+second)

print_sum(696, 65)
