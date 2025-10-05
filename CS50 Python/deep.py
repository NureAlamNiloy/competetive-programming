n = input("What is the Answer to the Great Question of Life, the Universe, and Everything? ")
n = n.lower().strip()
if n == "42" or n== "forty-two" or n == "forty two" in n:
    print("Yes")
else:
    print("No")