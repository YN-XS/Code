"""
字典
字典是一个无序序列
"""

info_dict = {"姓名": "姜子俊",
             "年龄": 21,
             "性别": True,
             "身高": 1.74,
             "体重": 54}
print(info_dict)

# 迭代遍历字典
"""
变量 i 是每一次循环中，获取到的键值对中的key
键值对中的值是 value = dict[key]
"""
for i in info_dict:
    print("%s:%s" % (i, info_dict[i]), end=" ")

print("")

for i in info_dict:
    print("{}:{}".format(i, info_dict[i]), end=" ")


