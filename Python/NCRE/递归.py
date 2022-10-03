'''
科赫曲线
'''
# import turtle
# def kh(long,n):
#     if n == 0:
#         turtle.forward(long)
#     else:
#         for angle in [0,60,-120,60]:
#             turtle.left(angle)
#             kh(long/3,n-1)
# def main():
#     turtle.setup(800,400,200,100)
#     turtle.penup()
#     turtle.goto(-300,-50)
#     turtle.pendown()
#     turtle.pensize(2)
#     kh(600,2)
#     turtle.hideturtle()
#     turtle.done()
# main()

#科特雪花
import turtle
def kh(long,n):
    if n == 0:
        turtle.forward(long)
    else:
        for angle in [0,60,-120,60]:
            turtle.left(angle)
            kh(long/3,n-1)
def main():
    turtle.setup(600,600)
    turtle.penup()
    turtle.goto(-200,100)
    turtle.pendown()
    turtle.pensize(2)
    level = 3
    kh(400,level)
    turtle.right(120)
    kh(400,level)
    turtle.right(120)
    kh(400,level)
    turtle.done()
main()

# 打包 磁盘: cd 文件夹 pyinstaller -i 图标.ico -F w文件.py/
