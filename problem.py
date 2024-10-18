n = int(input())
li = [int(i) for i in input().split()]
li.sort()
median = 0
if len(li) %2 == 1:
    median = (n+1)//2
else:
    median = ((n//2)+(n+1)//2)//2
sum = 0
for i in li:
    if i>li[median-1]:
        sum += (i - li[median-1])
    else:
        sum += (li[median-1]-i)
print(sum)
