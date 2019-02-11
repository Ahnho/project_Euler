import math, sequtils

proc sum_3_5():int=
  var a = 0
  for i in 1..999:
    if i mod 3 == 0 or i mod 5 == 0:
      a += i
  return a

echo sum_3_5()

