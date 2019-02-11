def is_primes(x): 
    for i in range(2,x//2):
        if x % i == 0:
            return False
    return True

def main():
    pr = []
    c = 2
    while len(pr) <=10001:
        if is_primes(c)  :
            pr.append(c)
        c += 1
    print(max(pr))

if __name__ == '__main__':
    main()
