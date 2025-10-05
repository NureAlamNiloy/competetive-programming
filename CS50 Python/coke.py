amount_due = 50
print("Amount Due:", amount_due)
while True:
    insert_coin = int(input("Insert Coin: "))
    if insert_coin == 25 or insert_coin == 10 or insert_coin ==5:
        amount_due -= insert_coin
        if amount_due > 0:
            print("Amount Due:", amount_due)
        else:
            if amount_due < 0:
                print("Change Owed:", amount_due*-1)
            else: print("Change Owed:", amount_due)
            break
    else :
        print("Amount Due:", amount_due)