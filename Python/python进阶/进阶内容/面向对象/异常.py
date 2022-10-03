try:
    num1 = int(input("请输入一个数字："))
    num2 = 100 / num1
    print("输入的数字为：%s" % num2)
# except ValueError:
#     print("请输入正确的值")
except ZeroDivisionError:
    print("除数不可以为零")
except Exception as result:
    print("未知错误 %s" % result)

print("-" * 50)

