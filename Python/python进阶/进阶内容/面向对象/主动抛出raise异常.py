def password():
    pwd = input("请输入密码")
    if len(pwd) >= 8:
        return pwd
    print("主动抛出异常")
    ex = Exception("密码长度不够")
    raise ex


try:
    print(password())
except Exception as result:
    print("捕获异常为：%s" % result)
