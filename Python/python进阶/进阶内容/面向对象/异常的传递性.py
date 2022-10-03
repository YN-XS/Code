def func1():
    num1 = int(input())
    return 100 / num1


def func2():
    return func1()


try:
    print(func2())
except ValueError:
    print("请输入正确的格式")
except Exception as result:
    print("未知错误：%s" % result)
