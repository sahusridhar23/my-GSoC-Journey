import numpy as np
arr= np.array([1,2,np.inf,4, -np.inf,6]) #infinite , minus infinity

print(np.isinf(arr))

# replace the inf values with some non-inf values

cleaned_arr = np.nan_to_num(arr,posinf =1000,neginf=-1000) #+ve infinity , -ve infinity
print(cleaned_arr)
s