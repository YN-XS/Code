"""
缺省参数：定义函数时，指定了默认值的函数参数
并且有默认值的缺省参数必须放在所有参数的末尾
"""


def stu_info(name, number=1, gender=True):
    if gender:
        gender_info = "男生"
    else:
        gender_info = "女生"
    print("【%d】%s是%s" % (number, name, gender_info))


# 未输入的参数值，保持默认参数
stu_info("姜子俊")
# 如果想给多个缺省参数中的某个具体参数传递数据
# 赋值语句 缺省参数=传递的参数值
# 否则会按顺序从左往右将参数值传递给参数
stu_info("姜文隆", False)
stu_info("杨舒", gender=False)
