"""
元组（）
元组中的元素不可以修改
元组通常用于保存不同类型数据
"""

tuple1 = ("姜子俊", 21, 1.73, 56)
print(tuple1[0])
tuple2 = ()
tuple3 = (5)  # 括号内只有一个元素，则会忽略括号，类型为元素类型
tuple4 = ("apple")   # 括号内只有一个元素，则会忽略括号，类型为元素类型
tuple5 = (5,)
print(type(tuple2), type(tuple3), type(tuple4), type(tuple5))
tuple6 = (1, 2)
# 定义元组类型
# 只要是多元素以逗号隔开，元组两边的括号可以省略
tuple7 = 1, 2
print(tuple6, tuple7, sep="--")
print(type(tuple6), type(tuple7))
