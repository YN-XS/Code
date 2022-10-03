"""
局部变量：
函数内部定义的变量，只能在函数内部使用
"""
num = 2


def func():
    num = 1
    # 局部变量与全局变量同名，函数内调用的是函数内的局部变量
    print("函数内部的num: %d" % num)
    return num


func()
print("函数外部的num: %d" % num)
