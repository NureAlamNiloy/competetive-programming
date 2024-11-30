def main():
    mealTime = input("What time is it? ")
    if 7.0 <= convert(mealTime) <= 8.0 :
        print("breakfast time")

    elif 12.0 <= convert(mealTime) <= 13.0 :
        print("lunch time")

    elif 18.0 <= convert(mealTime) <= 19.0:
        print("dinner time")

def convert(mealTime):
    user_hour = int(mealTime.split(":")[0])
    user_minute = int(mealTime.split(":")[1])
    decimalTime = user_hour+user_minute/60.0
    return decimalTime

if __name__ == "__main__":
    main()