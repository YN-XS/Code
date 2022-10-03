#斐波那契数列
# a,b=0,1             #a和b一起赋值
# while a<1000:
#     print(a,end=',')
#     a,b=b,a+b     #a和b一起赋值a=b，b=a+b,但后面的a是原来的a而不是被b赋值之后的a
#
#非递归算法

# def fib(n):
#     if n <= 2:
#         return 1
#     a=1;b=1
#     for i in range(n-2):
#         num = a+b
#         a = b
#         b = num
#     return b
# print(fib(6))
# '''
# 1,1,2,3,5,8,13
# '''
#递归算法
def fib(n):
    if n <= 2:
        return 1
    return fib(n-1)+fib(n-2)
print(fib(7))