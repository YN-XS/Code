"""
多值参数：用于参数个数不确定的函数
1.参数前加 * 可以接收【元组】 (习惯命名为 *args)
2.参数前加 ** 可以接收【字典】 (习惯命名为 **kwargs)
"""


def demo(num, *nums, **person):
    print(num, end=" ")
    print(nums, end=" ")
    print(person)


demo(1)
demo(1, 2, 3, 4)
# **kwargs接收字典参数时，使用赋值语句，且键值对中的键不需要引号
# 名称 = "str" | 名称 = 10 | 名称 = [元素1, 元素2, 元素3]
demo(1, 2, 3, 4, name="姜子俊", age=21, hobby=["羽毛球", "乒乓球"])


def sum_nums(*args):
    # 将传入的多个参数合并为一个元组进行操作
    # 也可以不用多值参数，直接传递一个含有多个数的元组
    print("\n传入的数有{}".format(args))
    results = 0
    for i in args:
        results = results + i
    return results


print("求和的结果是 %s" % sum_nums(1, 2, 3, 4, 5, 6, 7, 8, 9))
