# import time
# a = time.time()
# b = time.ctime()
# c = time.gmtime()
# d = time.strftime('%Y-%m-%d %H:%M:%S',c)
# print(a);print(b);print(c);print(d)
# f = '2022-02-24 11:52:01'
# print(time.strptime(f,'%Y-%m-%d %H:%M:%S'))

# import time
# scale = 10
# print('开始执行'.center(scale,'-'))
# start = time.perf_counter()
# for i in range(0,scale+1):
#     a = '*'*i
#     b = '.'*(scale - i)
#     c = i/scale*100
#     dur = time.perf_counter() - start
#     print('\r{}%[{}->{}]{:.2f}s'.format(c,a,b,dur),end = '')
#     '''
#     这里的输出语句中反斜杠r \r 和 end = '' 语句一起使用才产生了后面的进度替换前面的进度的效果！！！
#     '''
#     time.sleep(0.5)
# print('结束执行'.center(scale,'_'))

# import turtle
# def drawline(draw):
#     turtle.pendown() if draw else turtle.penup()
#     turtle.forward(40)
#     turtle.right(90)
# def drawdigital(num):
#     drawline(True) if num in [2,3,4,5,6,8,9] else drawline(False)
#     drawline(True) if num in [0,1,3,4,5,6,7,8,9,] else drawline(False)
#     drawline(True) if num in [0,2,3,5,6,8] else drawline(False)
#     drawline(True) if num in [0,2,6,8] else drawline(False)
#     turtle.left(90)
#     drawline(True) if num in [0,4,5,6,8,9] else drawline(False)
#     drawline(True) if num in [0,2,3,5,6,7,8,9] else drawline(False)
#     drawline(True) if num in [0,1,2,3,4,7,8,9] else drawline(False)
#     turtle.setheading(0)
#     turtle.penup()
#     turtle.forward(20)
# def drawdata(data):
#     for i in data:
#          drawdigital(eval(i))
# def main():
#     turtle.setup(1000,800,200,100)
#     turtle.pensize(10)
#     turtle.pencolor('blue')
#     turtle.penup()
#     turtle.back(300)
#     data1 = '20011118'
#     drawdata(data1)
#     turtle.hideturtle()
#     turtle.done()
# main()

# list1 = ['1','2','3']
# f = open("数据.txt","w")
# f.write(' '.join(list1))
# f.close()
# dict1 = {1:'jiang',0.4:333,(1,2):222,"jiang":"zij"}
# dict2 = dict(((1,"dd"),(2,333)))
# dict3 = dict({((2,2),"dd"),(6,333),("23",444)})
# dict4 = dict(dict1)
# print(dict1,dict2,dict3,dict4)
# w= "!".join('dddddd')
# print(w)

# x,y = '12'
# print(x,y)
# print(type(x))

# import turtle as t
# import random as r
#
# r.seed(1)
# t.pensize(2)
# t.pencolor('red')  #设置笔的颜色
# angles = 6
# points= [[0,0],[50,40],[70,80],[-40,30]]
#
# for i in range(len(points)):
#     x0,y0 = points[i]
#     t.penup()      #提起画笔，与pendown配对使用
#     t.goto(x0,y0)  #移到绝对坐标处
#     t.pendown()    #放下画笔
#
#     length = r.randint(6, 16)
#     for j in range(angles):
#         t.forward(length)  #沿着当前方向前面指定距离
#         t.backward(length) #沿着当前相反方向前进指定距离
#         t.right(360 / angles)
# t.done()

# import random
#
# s = input("请输入随机种子: ")
# ls = []
# for i in range(26):
#     ls.append(chr(ord('a')+i))
# for i in range(10):
#     ls.append(chr(ord('0')+i))
#
# random.seed(eval(s))
# for i in range(10):
#     for j in range(8):
#         print(random.choice(ls),end='')
#     print()

 #在......上一段代码
# for i in range(2,1001):
#     s = 0
#     for j in range(1,i):
#         if int(i/j)==i/j:
#             s += j
#     if s == i:
#         print(i)

# st = input()
# pair = 0
# for s in st:
#     if s=='"':
#         pair+=1
# if pair == 0:
#     pro = "没有单引号"
# elif pair % 2 == 0:
#     x = pair / 2
#     pro = "有{}对单引号".format(x)

# import turtle
# def drawCircle():
#     turtle.pendown()
#     turtle.circle(20)
#     turtle.penup()
#     turtle.fd(40)
# def drawRowCircle(n):
#     for j  in range(n,0,-1):
#         for i in range(j):
#             drawCircle()
#         turtle.fd(-j*40-20)
#         turtle.right(90)
#         turtle.fd(40)
#         turtle.left(90)
#         turtle.fd(40)
#
# drawRowCircle(5)
# turtle.hideturtle()
# turtle.done()

# import jieba
# s = input() # 请输入一个中文字符串，包含逗号和句号
# s = s.replace("，",'').replace("。",'').replace("\n",'').replace('"','')
# m = jieba.lcut(s)
# n = len(s)
# print(m)
# for i in m:
#     print(i,end ='/ ')
# print("\n中文词语数为{}。".format(len(m)))
# print("中文字符数为{}。".format(n))
#
#
# s = input() # 请输入一个中文字符串，包含逗号和句号
# s = s.replace("，",'').replace("。",'').replace("\n",'')
# m = jieba.lcut(s)
# n = len(s)
# print(m)
# for i in m:
#     print(i,end ='/ ')
# print("\n中文词语数为{}。".format(len(m)))
# print("中文字符数为{}。".format(n))


# ch = input("请输入字符串：\n")
# while ch !="@":
#     if '@' in ch:
#         wz = ch.index("@")
#         ch = ch[0:wz]
#         print(ch)
#         break
#     else:
#         print(ch)
#     ch = input("")
              #以写的方式打开文件out.txt

s = "1234156"
print(s.find('1',2,3))
# print(s.index('45'))