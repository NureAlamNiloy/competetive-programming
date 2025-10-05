st = input("camelCase: ")
s = ''
for ch in st:
    if ch.isupper():
        s +='_'
    s += ch.lower()

print(f"snake_case: {s}")