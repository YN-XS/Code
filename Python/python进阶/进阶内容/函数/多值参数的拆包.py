"""
传递多值参数时，希望直接将元组传递给 *args，字典传递个 **kwargs
"""


def demo(*args, **kwargs):
    print(args)
    print(kwargs)


gl_num = (1, 2, 3)
gl_stu = {"name": "姜子俊", "age": 21, "gender": True}

"""直接将多值参数以对应的方式传入函数"""
demo(1, 2, 3, name="姜子俊", age=21, gender=True)
print("")
"""
直接将元组和字典传入函数
导致函数将传入的元组和字典传给多值参数 *args
传入的元组和字典成为 *args 元组的两个元素
"""
demo(gl_num, gl_stu)
print("")
"""
将元组和字典拆包传入函数
元组参数前加 *
字典参数前加 **
"""
demo(*gl_num, **gl_stu)
