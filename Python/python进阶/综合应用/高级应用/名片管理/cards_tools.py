def show_menu():
    """
    欢迎界面
    """
    print("*" * 50)
    print("【名片管理系统】V 1.0".center(40))
    print("1. 新增名片".center(40))
    print("2. 搜索名片".center(40))
    print("3. 显示全部".center(40))
    print("-" * 50)
    print("0. 退出系统".center(40))
    print("*" * 50)


card_list = []
"""全局变量: 名单列表"""


def new_card():
    """
    新增名片功能
    """
    print("新增名片")
    card_info = {}
    name = input("请输入成员姓名")
    phone = input("请输入成员电话")
    qq = input("请输入成员QQ")
    email = input("请输入成员邮箱")
    card_info["name"] = name
    card_info["phone"] = phone
    card_info["QQ"] = qq
    card_info["email"] = email
    card_list.append(card_info)
    print(card_info)
    print("添加%s的名片成功" % name)


def search_card():
    """
    搜索名片功能
    """
    print("搜索名片")
    while True:
        search_info = input("请选择名片的相关信息：name | phone | QQ | email |（输入-1返回上一级）: ")
        if search_info == "-1":
            break
        if search_info in ["name", "phone", "QQ", "email"]:
            info = input("请输入%s信息" % search_info)
            for people_info in card_list:
                if people_info[search_info] == info:
                    print("查询成功，找到 % s 为 %s 的相关信息" % (search_info, info))
                    for i in ["name", "phone", "QQ", "email"]:
                        print(i, end="\t\t")
                    print("")
                    print("=" * 40)
                    print("%s \t\t %s \t\t %s \t\t %s" % (people_info["name"],
                                                          people_info["phone"],
                                                          people_info["QQ"],
                                                          people_info["email"]))
                    del_card(people_info)
                    break
            else:
                print("查询失败，未找到 % s 为 %s 的相关信息" % (search_info, info))
        else:
            print("请选择正确的成员信息")


def show_all():
    """
    展示所有名片功能
    """
    print("显示全部")
    if len(card_list) == 0:
        print("\n当前名片没有任何记录，请使用新增名片添加记录\n")
        return  # 下方的代码将不会再执行
        # return 可以返回函数的执行结果
        # 如果return后面没有内容，则返回到调用函数的位置并且不返回结果
    for i in ["name", "phone", "QQ", "email"]:
        print(i, end="\t\t")
    print("")
    print("=" * 40)
    for info in card_list:
        print("%s \t\t %s \t\t %s \t\t %s" % (info["name"], info["phone"], info["QQ"], info["email"]))


def del_card(people_info):
    """
    对搜索到的名片做相关处理
    :param people_info: 传入名单列表中的一份名片字典
    """
    while True:
        option = input("请选择执行操作: 1 修改名片 | 2 删除名片 |（输入-1 返回上一级）: ")
        if option == "1":
            print("修改名片")
            while True:
                del_info = input("请选择修改的选项: 1 name | 2 phone | 3 QQ | 4 email |（输入-1 返回上一级）: ")
                if del_info == "-1":
                    break
                if del_info == "1":
                    people_info["name"] = input("请输入修改后的 name: ")
                    print("修改成功")
                elif del_info == "2":
                    people_info["phone"] = input("请输入修改后的 phone: ")
                    print("修改成功")
                elif del_info == "3":
                    people_info["QQ"] = input("请输入修改后的QQ: ")
                    print("修改成功")
                elif del_info == "4":
                    people_info["email"] = input(["请输入修改后的email: "])
                    print("修改成功")
                else:
                    print("请输入正确的指令")
        elif option == "2":
            print("删除名片")
            card_list.remove(people_info)
        elif option == "-1":
            break
        else:
            print("请输入正确的指令")
