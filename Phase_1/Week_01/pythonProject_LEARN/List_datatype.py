#List datatype = collection of items, its a complex data type
## it is ordered sequence of items
### supports indexing and slicing
marks = [95, 99, 100, "maths"]
print(marks)
print(type(marks))
print("------------------------------------------------------------------------------------------------")

#supports indexing
print(marks[0])
print(marks[1])
print(marks[2])
print("------------------------------------------------------------------------------------------------")

for i in marks:
    print(i)
print("------------------------------------------------------------------------------------------------")

#supports slicing
N=[1,2,3,4,5,6,7,8,9,10]
print(N)
for i in N[3:9:]:
    print(i)
print("------------------------------------------------------------------------------------------------")
for i in N[0::2]:
    print(i)
print("------------------------------------------------------------------------------------------------")
for i in N[-1::-1]:
    print(i)
print ("The end")

