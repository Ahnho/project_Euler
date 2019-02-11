import math 

proc factorial(n:int):int =
  var c = 0
  for i in 1 .. n:
    c *= i
  return c

proc main =
  echo factorial(40) div factorial(20) div factorial(20)

if isMainModule:
  main()

