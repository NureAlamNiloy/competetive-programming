n = input("Expression: ")
x,y,z = n.split()
x = float(x)
z= float(z)
sum = 0
if y == "+":
    sum = x+z
elif y == "-":
    sum = x-z
elif y == "/":
    sum = x/z
elif y == "*":
    sum = x*z
print(sum)