n = input("Enter a greeting: ").lower().strip()
if "hello" in n:
    print("$0")
elif n[0] == "h":
    print("$20")
else:
    print("$100")