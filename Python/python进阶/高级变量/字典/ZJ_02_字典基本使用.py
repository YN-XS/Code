info_dict = {"姓名": "姜子俊",
             "年龄": 21,
             "性别": True,
             "身高": 1.74,
             "体重": 54}
print(info_dict)

# 取值
print(info_dict["姓名"], end=" ")
print(info_dict["身高"])

# 增加（不存在的键值对）
info_dict["爱好"] = "羽毛球"
print(info_dict)
# 修改（已存在的键值对）
info_dict["爱好"] = "乒乓球"
print(info_dict)

# 删除
print(info_dict.pop("性别"))
print(info_dict)
info_dict.clear()
print(info_dict)

