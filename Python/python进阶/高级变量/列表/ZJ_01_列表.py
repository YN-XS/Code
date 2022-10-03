"""
列表[]
列表中的元素可以修改
列表可以保存不同类型数据，通常用于保存相同类型数据
"""
# 列表
name_list = ["JZJ", "YS", "XKA"]
print(name_list)
print("")

for i in name_list:
    print(i, end=" ")
print("\n")

# 索引
print(name_list[0])
print(name_list[-1])
print(name_list.index("XKA"))

# 修改
print(name_list)
name_list[1] = "姜子俊"
print(name_list)
print("")

# 添加
list1 = ["a", "b", "c"]
list2 = (1, 2, 3)
list1.insert(-1, "e")  # 在索引位置之前添加
list1.append("d")     # 在列表末尾添加
list1.extend(list2)  # 在列表末尾添加另一个可迭代数据
print(list1)
print("")

# 删除
list3 = [1, 2, 3, 4, 5, 6, 3, 3]
list3.remove(3)  # 删除第一次出现的指定元素
print(list3.pop())    # 删除并返回末尾元素
print(list3.pop(0))  # 删除并返回指定索引元素
print(list3)
list3.clear()   # 清空列表
print(list3)
print("")

# del  本质是将变量从内存中删除
list4 = [1, 2, 3]
del list4[0]
print(list4)
name = "JZJ"
del name
print("")

