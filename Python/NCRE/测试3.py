# s = 10
# def f(n):
#     global s
#     for i in range(n):
#         s=s+i
#     return s
# print(s,f(5),s)

# for i in range(5):
#     print(i)
# for i in range(1,5):
#     print(i)

# txt = input("请输入类型序列：")
# txt = txt.split()
# d = {}
# for i in txt:
#     d[i] = d.get(i,0)+1
# ls = list(d.items())
# print(ls)
# ls.sort(key=lambda x:x[1], reverse=True)  # 按照数量排序
# for k in ls:
#     print("{}:{}".format(k[0], k[1]))

# tuple1 = tuple([1,2,3,4])
# print(tuple1)
# for i in range(4):
#     print(tuple1[i])

# ss = [2, 3, 6, 9, 7, 1]
# for i in ss:
#     print(max(ss), end=',')
#     ss.remove(max(ss))


# def fun(x= [],y=[6,7]):
#     x.append(8)
#     y.append(8)
#     return x+y
# a ,b =[1,2],[3,4]
# t = fun(x=a)
# t = fun(y=b)
# print(fun(),end = ';')
# def function(a,b,*args):
#     print(a,b,args)
# function('1','2','1222')

# ls = []
# for i in range(10):
#     ls.append(chr(ord('0')+i))
# ls1 = []
# for i in range(10):
#     ls1.append(chr(ord(str(i))))
# print(ls)
# print(ls1)

# s = "床前明月光，疑是地上霜。"
# s1 =''
# for i in s:
#     if i not in "，。":
#         s1 += i
#     if i in "，。":
#         print("{: ^20}".format(s1))
#         s1 =''

# print(oct(10))
# print("{:x}".format(10))
# print("{:X}".format(10))

# import jieba
# s ='''人工智能是包括十分广泛的科学，
# 它由不同的领域组成，如机器学习，计算机视觉等等，
# 总的说来，人工智能研究的一个主要目标是使机器能够胜任
# 一些通常需要人类智能才能完成的复杂工作。但不同的时代、
# 不同的人对这种“复杂工作”的理解是不同的。'''
#
# ls = jieba.lcut(s)
# lt = jieba.lcut(s.replace("\n",''))
# print(ls)
# print(lt)


# import math
# print(math.sin(90))
# print(math.sin(math.pi/2))

#
# n = eval(input())
# s = 0
# for i in range(1, n + 1):
#     d = 1
#     for j in range(1, i + 1):
#         d = d * j
#     s = s + d
# print(s)

# def jc1(n):
#     i = 1
#     for j in range(1,n+1):
#         i = i * j
#     return i
# def jc2(n):
#     s = 0
#     for i in range(1,n+1):
#         s+=jc1(i)
#     return s
#
# n = eval(input())
# print(jc2(n))


# n = eval(input())
# i = 1
# j = 2
# s = 0
# for k in range(n):
#     s = s + j/i
#     j,i=i+j,j
# print(s)

# n = eval(input())
# i = 1
# j = 1
# k = 0
# for l in range(1,n+1):
#     if l % 2 == 1:
#         k = k + i/j
#     else:
#         k = k - i/j
#     i,j = j,i+j
# print("{:.6f}".format(k))

# n = eval(input())
# j = 1
# if n<0 or type(n)==float:
#     print("ERROR")
# else:
#     for i in range(1,n+1):
#         j = j * i
#     print(j)

print(ord("好"))
print(chr())