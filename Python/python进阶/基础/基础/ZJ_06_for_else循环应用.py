"""
在学员列表名单中找到指定成员
"""
friends = [
    {"name": "姜子俊", "gender": True, "hobby": "羽毛球"},
    {"name": "杨舒", "gender": False, "hobby": "学习"},
    {"name": "周佳辉", "gender": True, "hobby": "王者荣耀"},
    {"name": "......"}
]
find_name = input("请输入需要查询的成员姓名\n")
for friend in friends:
    print(friend)
    if find_name == friend["name"]:
        print("找到成员 ——> %s" % find_name)
        break
else:
    print("\n抱歉，成员名单中没有该成员")
