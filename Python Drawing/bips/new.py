import turtle
t = turtle.Turtle()

t.pensize(6)
t.begin_fill()
t.fillcolor("red")
t.left(140)
for i in range(6):
    t.circle(-100,120)
    t.right(60)
    t.circle(-100,120)
    t.hideturtle()
t.end_fill()





turtle.done()