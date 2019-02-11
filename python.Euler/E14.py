# def rull(a):
#     b = [a]
#     while a != 1 :
#         if a % 2==0:
#             a = a//2
#             b.append(a)
#         else:
#             a = a*3 +1
#             b.append(a)
#     return(b)

# def chain():
#     b = []
#     for i in range(2,1000001):
#         if len(rull(a)) < len(rull(a+1)):
#             b.append(len(rull(a)))
#             a +=1
#         else:
#             a +=1
#     return b


def main():
    max =[0,[]]
    for i in range(2,1000001):
        num = [i]
        while num[-1] != 1:
            if num[-1] % 2 == 0:
                num.append(num[-1] // 2)
            else:
                num.append(num[-1] * 3 + 1)
        if max[0] < len(num):
            max = [len(num),num]
        if i % 10000 == 0:
            print(len(num),num)
        
            
    print(max)

if __name__ == '__main__':
    main()
# 525 / 837799
