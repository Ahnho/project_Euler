# class Triangle:
#     def __init__(self):
#         self.pointA = [0,1]
#         self.pointB = [-1,-1]
#         self.pointC = [1,-1]
#         self.position = [0,0]
#         self.color = "blue"

#     def changecolor(self):
#         pass
#     def Rotate(self):
#         pass
#     def Move(self):
#         pass

# t = Triangle()
# print(t.pointA)
# t.pointB = [-7,-5]
# print(t.pointB)
# newpoint = t.pointC
# print(newpoint)

class ball:
    def __init__(self,color,size,direction):
        self.color = color
        self.size = size
        self.direction = direction
    
    def __str__(self):
        msg = "Hi, I`m  a" + self.size + ""+ self.color + " Ball! "

        return msg

myball = ball("Red","small","down")
print(myball)


    