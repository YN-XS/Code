# # a, b, c = eval(input())
# # print(a, b, c)
# #
# # d, e, f = input()
# # print(d, e, f)
# import time
# print(time.gmtime())
# print(time.gmtime()[6])
# t = '2019-12-31'
# print(t + "是星期" + str(time.strptime(t, "%Y-%m-%d")[6]+1))

import turtle as t
import random as r
r.seed(1)
t.pensize(2)
for i in range(3):
    length = r.randint(20, 80)
    x0 = r.randint(-100, 100)
    y0 = r.randint(-100, 100)

    t.penup()
    t.goto(x0, y0)
    t.pendown()
    for j in range(4):
        t.fd(length)
        t.seth(90*(j+1))
t.done()
