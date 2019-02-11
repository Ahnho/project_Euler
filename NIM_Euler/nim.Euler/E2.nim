import math
import nimpy

proc fibo(l:int):int {.exportpy.} =
  var a,b = 1
  var c = a
  for i in 1..l:
    c = a
    a = b
    b = c+b
  return a

# proc main() =
#   var s = 0
#   var l = 1
#   while fibo(l) < 4000000:
#     if fibo(l) mod 2 == 0:
#       s += fibo(l)
#     l += 1
#   echo s

# if isMainModule:
#   main()
