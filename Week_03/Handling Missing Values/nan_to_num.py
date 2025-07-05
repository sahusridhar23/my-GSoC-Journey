# ML models cannot process the nan values
# so , if nan values are found then re replace them with some number
# np.nan_to_num() default -0 - replaces nan values with an other number , by default 0

import numpy as np
arr = np.array([1,2,np.nan,4,np.nan,6])

cleaned_Arr = np.nan_to_num(arr,nan=100)
print(cleaned_Arr)

cleaned_Arr_def = np.nan_to_num(arr) # by def it is replaced with 0
print(cleaned_Arr_def)
