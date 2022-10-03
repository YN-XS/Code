"""
列表间的 += 操作本质上是 extend 方法
list += list ——> list.extend(list)
num += num ——> num = num + num
"""


def func(num, list1):
    # num += num ——> num = num + num
    # 只要使用赋值语句：就是在函数内定义了一个局部变量，不会影响外部变量
    num += num
    # list += list ——> list.extend(list)
    # 但是列表中使用+=并不是赋值语句，其本质是列表的extend方法,方法会改变外部变量
    list1 += list1
    print("函数内部 %d" % num, end=" ")
    print(list1)


gl_num = 10
gl_list = [1, 2, 3]
func(gl_num, gl_list)
print("函数外部 %d" % gl_num, end=" ")
print(gl_list)

