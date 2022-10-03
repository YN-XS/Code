"""
列表，元组，字符串
+号合并返回一个新的迭代器
注意并不会改变原来的迭代器
"""
str1 = "123"
str2 = "456"
str3 = str1 + str2
print(str3)
list1 = [1, 2, 3]
list2 = [4, 5, 6]
list3 = list1 + list2
print(list3)
tuple1 = (1, 2, 3)
tuple2 = (4, 5, 6)
tuple3 = tuple1 + tuple2
print(tuple3)

"""
列表，元组，字符串
*号重复元素，返回新的迭代器
注意并不会改变原来的迭代器
"""
info_str = "JZJ"
info_list = ["Z", "J", "H"]
info_tuple = ("Y", "S")
info_str1 = info_str * 3
info_list1 = info_list * 3
info_tuple1 = info_tuple * 3
print(info_str1, info_list1, info_tuple1, sep="\n")

"""
列表的append，extend等方法是修改原来的列表
而不会产生新的列表
"""
list_example = [10, 12, 14]
list_example.extend([16, 17])  # 添加多个元素
list_example.append([16, 17])  # 添加单个元素
print(list_example)

"""
字符产，列表，元组，字典
成员运算符 in 和 not in
"""
str_str = "123456"
tuple_tuple = (1, 2, 4)
dict_dict = {1: '1', 2: '2', 4: '4'}
print("4" in str_str, end=" ")
print(3 in tuple_tuple, end=" ")
print(3 in dict_dict, end="\n")

