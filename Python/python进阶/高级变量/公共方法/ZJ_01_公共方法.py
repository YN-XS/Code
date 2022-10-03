# len()容器中元素个数
list1 = [1, 2, 3]
str1 = "123456"
print(len(list1), len(str1))

# del 删除变量

list2 = [4, 5, 6, 7, 8, 9]
print(list2)

del list2[0]
print(list2)

del(list2[0])
print(list2)

# 取最大最小元素
print(max(list2))
print(min(list2))
"""
字典中比较和返回的是键值对中的键
键值对中的键是唯一的，没有重复
"""
dict1 = {"name1": "JZJ", "name2": "YS", "name3": "ZJH"}
print(max(dict1))

# 列表和元组也可以索引切片
info_list = ["name", "gender", "height"]
info_tuple = ("gender", "name", "height")
print(info_list[1:2])
print(info_tuple[0:-1])
