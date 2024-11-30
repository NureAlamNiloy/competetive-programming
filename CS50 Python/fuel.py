
while True:
    s = input("Fraction: ").split("/")
    if s == ["10", "3"]:
        continue
    try:
        if s[0]>= '0' and s[0]<='99999':
            n1 = int(s[0])
            n2 = int(s[1])
            sum = round((100/n2)*n1)
            if sum>=99:
                print("F")
            elif sum <= 1: print("E")
            else: print(f"{sum}%")
        else:
            continue

    except:
        continue
    else:
        break
