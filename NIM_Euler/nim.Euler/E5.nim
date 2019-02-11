import future, math, sequtils

proc gcd(a,b: int): int =
    if b == 0:
        return a
    else:
        return gcd(b, a mod b)

proc lcm(a,b:int): int=
    a * b div gcd(a,b)

proc lcm2(A:seq[int]):int =
    if len(A) == 1:
        return A[0]
    var l: int = A[0]
    for i in 1..A.high:
        l = lcm(l, A[i])
    return l
proc main =
    var c: seq[int] = toSeq 1..20
    echo lcm2(c)

if isMainModule:
    main()
