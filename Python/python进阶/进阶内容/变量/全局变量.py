"""
全局变量：函数外部定义的变量，所有函数都可以使用这个变量
函数内部若使用一个变量，若在函数内没有同名的【局部变量】则会向外查找是否有同名的【全局变量】
"""
gl_list = ["1"]


def add_info():
    gl_list.append("周佳辉")
    gl_list.extend(["杨舒", "姜子俊"])


def del_info():
    gl_list.pop(0)


print(gl_list)
add_info()
print(gl_list)
del_info()
print(gl_list)

"""
函数内部不允许直接用赋值语句修改【全局变量】，只会在函数内部定义一个同名的【局部变量】
如果想在函数内部修改函数外部的【全局变量】，需要用global关键字声明变量是【全局变量】
"""
gl_name = "姜子俊"


def func():
    # 在此处声明了name是全局变量，以下的操作可以对全局变量做修改
    global gl_name
    gl_name = "JZJ"


func()
print(gl_name)
