li = []
try:
    while True:
        s = input()
        li.append(s)
except EOFError:
    pass

finally:
    li2 = sorted(set(li))
    for i in li2:
        print(li.count(i), end=" ")
        print(i.upper())