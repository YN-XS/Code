info_dict = {"姓名": "姜子俊",
             "年龄": 21,
             "性别": True,
             "身高": 1.74,
             "体重": 54}
print(info_dict)

# 统计
info_len = len(info_dict)
print(info_len)

# 合并字典(已有则覆盖)
dict2 = {"身高": 1.85, "爱好": "羽毛球"}
info_dict.update(dict2)
print(info_dict)

# 清空字典
info_dict.clear()
print(info_dict)