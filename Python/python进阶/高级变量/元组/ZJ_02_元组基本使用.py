tuple1 = (1, "2", 1, 4, "5", 6, 1)

# 索引
print(tuple1[2])
print(tuple1.index(1))

# 元组数据统计
print(tuple1.count(1))
print(len(tuple1))


for i in tuple1:
    print(i, end=" ")
print("")

info_tuple = ("姜子俊", 21, 1.74)
info_str = "%s的年龄是%d,身高是%.2f" % info_tuple

print("%s的年龄是%d,身高是%.2f" % info_tuple)
print(info_str)

# 函数转换列表与元组
tuple2 = (1, 2, 3)
list2 = [4, 5, 6]

tuple3 = tuple(list2)
list3 = list(tuple2)
print(tuple2, list2)
print(tuple3, list3)



