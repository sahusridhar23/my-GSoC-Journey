# basic calculator
a = int(input("Enter first number: "))
b = int(input("Enter second number: "))
operator = input("Enter the operator (+,-,*,%,/,//,**) : ")
if operator == "+":
    print(a+b)
elif operator == "-":
    print(a-b)
elif operator == "*":
    print(a*b)
elif operator == "%":
    print(a%b)
elif operator == "/":
    print(a/b)
elif operator == "//":
    print(a//b)
elif operator == "**":
    print(a**b)
else:
    print("INVALID OPERATION")