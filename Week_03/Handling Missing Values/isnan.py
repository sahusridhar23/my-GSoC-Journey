#np.isnan(Array) - detects the non integer values

import numpy as np
arr = np.array([1,2,np.nan,4,np.nan,6])

print(np.isnan(arr))

# WE CANNOT DIRECTLY COMPARE THE np.nan values
print(np.nan == np.nan)
