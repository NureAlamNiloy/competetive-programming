s = input()
l = int(input())
r = int(input())

for l,r in s:
    temp = s[l]
    s[l] = s[r]
    s[r] = temp


print(s)
    
