n = int(input())
flag = False
for i in range(1,n+1):
    x = pow(2,i)
    if x == n:
        print("YES")
        flag = True
        break

if flag == False:
    print("NO")