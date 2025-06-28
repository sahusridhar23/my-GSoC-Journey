import numpy as np
import time

arr1 = np.arange(0,9999999)
arr2 = np.arange(9999999,9999999*2)

start = time.time()
arr = np.array([10,20,30])
multiplied = arr1 * arr2 #vectorised multiplication

print(f"time taken :{time.time()-start:.10f} seconds" )
print(multiplied)