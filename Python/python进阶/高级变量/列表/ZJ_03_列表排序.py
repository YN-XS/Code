name_list = ["JZJ", "ZJH", "YS", "JSY"]
num_list = [1, 4, 2, 9, 5]
print(name_list, end=" ")
print(num_list)

# 升序
name_list.sort()
num_list.sort()
print(name_list, end=" ")
print(num_list)

# 降序
name_list.sort(reverse=True)
num_list.sort(reverse=True)
print(name_list, end=" ")
print(num_list)
print("")

# 逆序（反转）
name_list = ["JZJ", "ZJH", "YS", "JSY"]
num_list = [1, 4, 2, 9, 5]
print(name_list, end=" ")
print(num_list)
name_list.reverse()
num_list.reverse()
print(name_list, end=" ")
print(num_list)
