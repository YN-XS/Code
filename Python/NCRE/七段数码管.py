import turtle
import time
def drawkb():
    turtle.penup()
    turtle.forward(10)
def drawline(draw):
    drawkb()
    turtle.pendown() if draw else turtle.penup()
    turtle.forward(40)
    drawkb()
    turtle.right(90)
def drawdigital(num):
    drawline(True) if num in [2,3,4,5,6,8,9] else drawline(False)
    drawline(True) if num in [0,1,3,4,5,6,7,8,9,] else drawline(False)
    drawline(True) if num in [0,2,3,5,6,8] else drawline(False)
    drawline(True) if num in [0,2,6,8] else drawline(False)
    turtle.left(90)
    drawline(True) if num in [0,4,5,6,8,9] else drawline(False)
    drawline(True) if num in [0,2,3,5,6,7,8,9] else drawline(False)
    drawline(True) if num in [0,1,2,3,4,7,8,9] else drawline(False)
    turtle.setheading(0)
    turtle.penup()
    turtle.forward(20)
def drawdata(data):
    for i in data:
        if i == 'y':
            turtle.pencolor('red')
            turtle.write('年',font=('Arial',28,'normal'))
            turtle.forward(40)
        elif i == 'm':
            turtle.pencolor('purple')
            turtle.write('月',font=('Arial',28,'normal'))
            turtle.forward(40)
        elif i == 'd':
            turtle.pencolor('green')
            turtle.write('日',font=('Arial',28,'normal'))
            turtle.forward(40)
        else:
            drawdigital(eval(i))
def main():
    turtle.setup(1500,800,220,100)
    turtle.pensize(10)
    turtle.pencolor('blue')
    turtle.penup()
    turtle.back(600)
    data1 = time.strftime('%Yy%mm%dd',time.gmtime())
    drawdata(data1)
    turtle.hideturtle()
    turtle.done()
main()