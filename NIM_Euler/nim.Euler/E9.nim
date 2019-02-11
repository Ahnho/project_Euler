import math 

proc tri():int =
  for b in 1..1000:
    for a in b..1000:
      if a^2 + b^2 == (1000-a-b)^2:
        echo (1000-a-b)*a*b
        
echo tri()
