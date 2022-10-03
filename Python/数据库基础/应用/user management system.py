import pymysql


def register():
    print("用户注册")

    user = input("请输入用户名：")
    password = input("请输入密码：")

    conn = pymysql.connect(user="zijun", password="10041118",
                           charset="utf8", db="application")
    cursor = conn.cursor()

    cursor.execute(
        "insert into user_management_system (user_name,password) values(%s,%s)", (user, password))
    conn.commit()

    cursor.close()
    conn.close()

    print("注册成功！\n用户名：{}\n密码：{}".format(user, password))


def login():
    print("用户登录")

    user = input("请输入用户名：")
    password = input("请输入密码：")

    conn = pymysql.connect(user="zijun", password="10041118",
                           charset="utf8", db="application")
    cursor = conn.cursor()

    cursor.execute(
        "select * from user_management_system where user_name=%s and password=%s", (user, password))
    result = cursor.fetchone()

    cursor.close()
    conn.close()

    if result is not None:
        print("登录成功\n", result)
    else:
        print("登录失败，请检查用户名或密码\n")


def run():
    while True:
        print("欢迎使用《用户管理系统》")
        choice = input("1：注册\n2：登录\n0：退出系统\n")
        if choice == "0":
            print("欢迎下次使用!")
            break
        elif choice == "1":
            register()
        elif choice == "2":
            login()
        else:
            print("输入错误")


if __name__ == '__main__':
    run()
