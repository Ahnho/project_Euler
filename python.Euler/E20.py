def factorial(a):
    b = 1
    while a != 0:
        b *= a
        a -= 1
    return b

def sum_3():
    f = 0
    c = str(factorial(100))
    for i in range(len(c)):
        f += int(c[i])
    return f

print(sum_3()) 


