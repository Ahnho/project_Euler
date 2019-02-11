import sequtils, strutils,math

proc palindrome(n:int):bool =
  let origin = $n
  var reversed = $n
  for i in 0 .. origin.high:
    reversed[i] = origin[^(i+1)]
  return reversed == origin

proc main = 
  var max_num = 0
  for i in 100 .. 999:
    for j in i .. 999:
      if palindrome(i*j) and i*j > max_num :
        max_num = i*j

  echo max_num

if isMainModule:
  main()
