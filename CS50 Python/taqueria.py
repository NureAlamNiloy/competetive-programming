menu = {
    "baja taco": 4.25,
    "burrito": 7.50,
    "bowl": 8.50,
    "nachos": 11.00,
    "quesadilla": 8.50,
    "super burrito": 8.50,
    "super quesadilla": 9.50,
    "taco": 3.00,
    "tortilla salad": 8.00
}
total = 0.00

try:
    while True:
        s = input("Item: ").lower()
        if s in menu:
            total+=menu[s]
            print(f"Total: ${total:.2f}")
        else:
            continue

except EOFError:
    pass


