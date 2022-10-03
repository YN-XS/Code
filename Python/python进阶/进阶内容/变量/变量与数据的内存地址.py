"""
python中
变量和数据分开保存
数据保存再内存中的某个位置
变量中保存着数据所在内存中的地址
变量中记录数据的地址————引用
id()查看变量中保存数据所在的内存地址
数据的地址本质就是一个数字
"""
name1 = "姜子俊"
name2 = name1
print(id("姜子俊"))
print(id(name1))
print(id(name2))


def id_num(num):
    print("函数内部 %d 对应的内存地址是 %d" % (num, id(num)))
    result = "杨舒"
    print("函数要返回的数据的内存地址 %d" % id(result))
    # 将函数内部字符串变量返回，返回的是数据的引用（内存地址），而不是数据本身
    return result


a = 120    # 变量 a 的引用 对应数据 120 所在的内存地址
print("变量 a 保存的数据内存地址是 %d" % id(a))
b = id_num(a)  # 调用函数，将实参 a 的引用传递到函数的形参 num 中，num 的引用 = a 的引用
print("函数返回的数据的内存地址 %d" % id(b))
