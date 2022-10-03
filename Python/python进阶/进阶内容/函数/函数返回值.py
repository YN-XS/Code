"""
函数通过返回值向外界传递函数的执行结果
"""
# 多个返回值


def func():
    temp = 38
    wetness = 50
    # 返回多个数据可以使用元组
    # (temp, wetness)两边的括号可以省略
    return temp, wetness


print(func())
gl_temp, gl_wetness = func()
print("温度是%d，湿度是%d" % (gl_temp, gl_wetness), sep=" ")
