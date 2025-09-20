import numpy as np
prices = np.array([100,200,300])
discount = 10 #scalar single value

final_prices = prices - (prices *discount/100)

print(final_prices)

# Broadcasting in NumPy is the automatic expansion of arrays with different shapes during arithmetic operations so they behave as if they have compatible shapes.

'''
3 rules of broadcasting :
a) matching dimensions : [1,2] +[2,4]
b) expanding single elements : [1,2,3] + 10 
c) incopatible shapes : [1,2,3] + [1,2] = error
'''