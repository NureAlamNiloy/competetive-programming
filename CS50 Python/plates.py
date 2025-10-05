#  ***   ---   |||		 In the name of ALLAH		|||   ---   ***  #
def main():
    plate = input("Plate: ")
    if is_valid(plate):
        print("Valid")
    else:
        print("Invalid")


def is_valid(s):
    n = len(s)
    if s.isalpha() == True and n>1 and n<=6 and " " not in s and "!" not in s and "." not in s :
        return True
    elif n<2:
        return False

    elif "." in s:
        return False

    elif ((s[0]>= '0' and s[0]<='9') or (s[1]>= '0' and s[1]<='9')):
        return False
    else:
        temp = ""
        for i in range(n):
            if s[i].isalpha() == False:
                temp+=s[i]
        if len(temp) !=0 and temp[0] == '0':
            return False
        flag = True
        record = 0
        for i in range(n):
            if s[i].isalpha() == False:
                record = i
                break
        for i in range(record,n):
            if s[i].isalpha():
                flag = False

        if flag: return True
        else: return False



main()