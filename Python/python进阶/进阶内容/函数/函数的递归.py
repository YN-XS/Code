"""
函数的递归
函数内部调用函数本身
1.函数内部代码相同，只是针对不同参数，处理结果不同
2.当参数满足一定条件函数执行结束，否则死循环 ——>递归的出口
"""


def func1(num):
    if num >= 1000:
        return
    print(num, end=" ")
    func1(num + num)


def func2(num):
    if num == 1:
        return 1
    return num + func2(num-1)


func1(2)
print("")
print(func2(100))
