import math

x = [1,2,3,4,5]

def mean(x): # 평균
    a = 0
    for i in range(0,len(x)):
        a =  a + x[i]
    b = a / len(x)
    return b

print(mean(x))

def var(x): # 분산
    a = 0
    for i in range(0,len(x)):
        a += (x[i] - mean(x))**2
    b = a / len(x)
    return b

print(var(x))

def std(x):  # 표준편차
    return math.sqrt(var(x))

print(std(x))


def factorial(a): # ! 
    b = 1
    while a != 0:
        b *= a
        a -= 1
    return b

# def main():
#     print(factorial(40)//factorial(20)//factorial(20))

# if __name__ == '__main__':
#     main()


print(factorial(10))


def gcd(a,b): # 최대 공약수
    while b != 0:        
        a,b = b,a % b
    return a
               
def lcm(a,b): #최소 공배수
    return a*b // gcd(a,b)


def is_primes(x):  # 소수 판별함수
    for i in range(2,x//2):
        if x % i == 0:
            return False
    return True

# 느낀점 :
##  학교에서 배운 내용들을 함수로 구현 해봤고 이렇게 생각하는것도 재미있었고 더 고급 스킬과 다양한 언어들도 배워보고싶고 최종적으로 개발을 해보고싶다.