import math,sequtils

proc is_primes(x:int):bool =
  for i in 2..(x div 2):
    if x mod i == 0:
      return false
    return true

proc main =
  var i = 2
  var a:seq[int64] = @[]
  while a.len <= 10001:
    if is_primes(i):
      a.add(i)
    i += 1
  echo a.max

if isMainModule:
  main()
