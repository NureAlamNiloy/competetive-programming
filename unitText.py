from SnackCase import squre

def main():
    test_squre()

def test_squre():
    if squre(3) !=9:
        print("The function not run 3")
    if squre(4) !=16:
        print("The function not run 4")
    if squre(2) !=4:
        print("The function not run 2")

if __name__ == "__main__":
    main()