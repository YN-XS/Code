import cards_tools as ct
ct.show_menu()
while True:
    action = input("请选择执行操作1.新增名片| 2.搜索名片| 3.显示全部| 0.退出系统: ")
    if action in ["1", "2", "3"]:
        print("您选择的操作是 [%s]" % action, end=" ")
        if action == "1":
            ct.new_card()
        elif action == "2":
            ct.search_card()
        else:
            ct.show_all()
    elif action == "0":
        print("欢迎再次使用【名片管理系统】")
        break
    else:
        print("执行错误，请重新输入")
