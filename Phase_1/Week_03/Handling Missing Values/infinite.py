#np.isinf(array) - returns bool
# 10^10000 , 1/0

import numpy as np
arr= np.array([1,2,np.inf,4, -np.inf,6]) #infinite , minus infinity

print(np.isinf(arr))
