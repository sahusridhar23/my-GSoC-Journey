import time

import numpy as np

arr1 = np.arange(0,9999999)
arr2 = np.arange(9999999,9999999*2)

start = time.time()
res = arr1+arr2 #vectorised addition
print(res)

print(f"time taken :{time.time()-start:.10f} seconds") # comparitively very fast
