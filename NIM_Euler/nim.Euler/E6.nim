import math

proc sum_1():int =
  var a = 0
  for i in 1..100:
    a += i^2
  return a

proc sum_2():int =
  var b = 0
  for i in 1..100:
    b += i
  return b^2

proc main =
  echo sum_2() - sum_1()

if isMainModule:
  main()
