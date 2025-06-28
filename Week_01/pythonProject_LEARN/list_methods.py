marks = [95,96,99]

print(marks)
marks.append("hello {}".format(6969))
marks.append("hello {}".format(121212))
print(marks)

marks.insert(2,'new ele')
print(marks)

print(100 in marks)
print(68 in marks)

length =len(marks)
print(length)
print("-----------------------------------------------------------------------------------")

i=0
while i < length:
    print(marks[i])
    i+=1
print("-----------------------------------------------------------------------------------")

marks.clear()
print(marks)
