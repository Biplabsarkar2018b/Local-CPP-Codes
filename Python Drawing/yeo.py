from random import random
import turtle
import random
from scipy import rand
t = turtle.Turtle()
t.speed(0)
turtle.colormode(255)
for i in range(100):
    r = random.randint(0,255)
    g = random.randint(0,255)
    b = random.randint(0,255)
    t.fillcolor(r,g,b)
    t.begin_fill()
    t.left(45)
    t.fd(100)
    t.right(45)
    t.fd(100)
    t.right(135)
    t.fd(100)
    t.right(45)
    t.fd(100)
    t.right(280)
    t.end_fill()

turtle.done()