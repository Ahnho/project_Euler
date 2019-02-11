import sequtils, math, future

proc is_primes(x:int):bool =
  for i in 2..(x div 2):
    if x mod i == 0:
      return false
  return true

proc primes(n:int64): seq[int64]=
  var fac:seq[int64] = @[]
  var m = n
  var p = 2
  while m >= p:
    if m mod p == 0:
      fac.add(p)
      m = m div p
    else:
      p += 1
      while not is_primes(p):
        p += 1
  return fac


proc main =
  echo primes(600851475143).max

if isMainModule:
  main()
