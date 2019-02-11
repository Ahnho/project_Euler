# def Trinumber(a):
#     b = 0
#     for i in range(1,a+1):
#         b += i
#     return b

# def measure(a):
#     c = []
#     for i in range(1,Trinumber(a)+1):
#         if Trinumber(a)%i ==0 :
#             c.append(i)
#     return(len(c))        

# def tri_measure(b):
#     a = 1
#     while measure(a) <= b-1:
#         a += 1
#     return a 

# def main():
#     print(Trinumber(tri_measure(500)))

# if __name__ == '__main__':
#     main()

def main():
    n = 1
    trinum = 1
    while True:
        n += 1
        trinum += n
    
        a = [1,trinum]
        for i in range(2,trinum):
            if i > trinum / i :
                break
            if trinum % i == 0:
                a.append(i)
                if trinum // i != i:
                    a.append(trinum//i)

        if len(a) >= 500 :
            print(n,trinum,len(a))
            break        

if __name__ == '__main__':
    main()