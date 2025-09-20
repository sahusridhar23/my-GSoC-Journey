import time

list1 = range(0,9999999)
list2 = range(9999999,9999999*2)

zipl = list(zip(list1,list2))
zipt = tuple(zip(list1,list2))
print(zipl)
print(zipt)

start= time.time()
res = [x+y for x,y in zip(list1,list2)]
print(res)
print("time taken : ",time.time()-start) # readabillity issue
print(f"time taken: {time.time()-start:.10f} seconds") # too slow


# known as f-string formatting(to print a message with a formatted floating-point number.)
'''
SYNTAX BREAKDOWN :

#  
include expressions inside {}, and Python will evaluate them

# 
:.10f
This is a format specifier that controls how the float is displayed.

'''


