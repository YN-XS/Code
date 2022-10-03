"""
无论函数的参数是可变类型还是不可变类型
只要是赋值语句就只会修改局部变量的引用，不会影响到外部变量的引用
"""


def func(num, list1):
    # 即使形参与函数内部的局部变量同名
    # 函数内部对参数使用赋值语句，也不会改变外部的实参变量
    # 其实就是外部实参也是个全局变量
    num = 50
    list1 = [4, 5, 6]
    print("函数内部：%d" % num)
    print("函数内部", list1)


gl_num = 100
gl_list1 = [1, 2, 3]
func(gl_num, gl_list1)
print("函数外部：%d" % gl_num)
print("函数外部", gl_list1)
