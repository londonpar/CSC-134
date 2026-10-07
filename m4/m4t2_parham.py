# CSC 134
# M4T2 - Turtles and Loops
# parhaml
# 10/7/26

import turtle
win = turtle.Screen()

t = turtle.Turtle()
win.bgcolor("darkred")
t.color("black")
t.pencolor("black")
t.shape("turtle")
t.pensize(3)
t.fillcolor("black")

sides = 65
length = 5
angle = 360 / sides
t.teleport(-100,100)
t.begin_fill()
for side in range(sides):
    t.forward(length)
    t.right(angle)
t.end_fill

t.teleport(-115,8)
t.begin_fill()
t.fillcolor("white")
for side in range (sides):
    t.forward(length)
    t.left(angle)
t.end_fill

t.teleport(50,0)
t.begin_fill()
t.fillcolor("black")
t.circle(50)
t.end_fill()

t.teleport(0,8)
t.begin_fill()
t.fillcolor("white")
for side in range(sides):
    t.forward(length)
    t.left(angle)
t.end_fill()

t.teleport (-70,-100)
t.begin_fill()
t.circle(50)
t.fillcolor("darkorange2")
t.end_fill()

t.teleport(-180,-150)
t.begin_fill()
t.fillcolor("black")
t.circle(180,100)
t.end_fill()

win.mainloop()
