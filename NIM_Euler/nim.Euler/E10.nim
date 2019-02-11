import sequtils, math

proc is_primes(x:int):bool=
  for i in 2..(x div 2):
    if x mod i == 0:
      return false
  return true

proc primes_2():int64=
  var a:seq[int64] = @[]
  for i in 2.. 2000000:
    if is_primes(i):
      a.add(i)
  return a.sum

echo primes_2()


