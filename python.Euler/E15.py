def factorial(a):
    b = 1
    while a != 0:
        b *= a
        a -= 1
    return b

def main():
    # print(factorial(40)//factorial(20)//factorial(20))
    print(factorial(8))
if __name__ == '__main__':
    main()
        
