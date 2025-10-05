def convert(st):
    st = st.replace(':)', '🙂')
    st = st.replace(':(', '🙁')
    return st

def main():
    name = input("Enter name = ")
    change_name = convert(name)
    print(change_name)

main()  