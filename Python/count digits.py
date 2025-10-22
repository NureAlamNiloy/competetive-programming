# 2520. Count the Digits That Divide a Number

num = int(input())
main = num
c = 0
while num > 0 :
    x = num % 10
    if main % x == 0:
        c+=1
    num = num // 10

print(c)



