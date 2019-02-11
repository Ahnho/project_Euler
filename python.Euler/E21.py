def measure_sum(a):
    i = 1
    l = 0
    while i < a:
        if a % i ==0:
            l += i
        i +=1
    return l

def u_num():
    k = 0
    for b in range(2,100):
        for c in range(2,b+1):
            if b != c:
                if measure_sum(b) == measure_sum(c):
                    print(measure_sum(b))
            #         k = k + b +c
    return k 

print(u_num())

