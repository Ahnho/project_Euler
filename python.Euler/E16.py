def sum_2():
    b = []
    a = 2**1000
    c = str(a)
    for i in range(0,len(c)):
        b.append(int(c[i]))
    return sum(b)

print(sum_2())
# 1366

