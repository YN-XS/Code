"""
一、print("字符串%s" %s 变量)
"""
name = input("请输入您的名字")
print("my name is %s" % name)  # 中间没有逗号

study_number = int(input("请输入您的学号"))
"""
二、"%05d" 输出结果如果不足五位数则不足位用0来不全，若满足五位数即以上则输出变量本身即可
"""
print("my study_number is %08d\n" % study_number)
a, b = 20, 30000
print("%04d %04d\n" % (a, b))

"""
三、多个格式变量
"%f %s %d" % (a, b, c)
"""

who, how = "苹果", "数量"
price = 0.5
amount = 8.25
money = price * amount
"""
四、"%.4f" % 价格  表示输出的价格保留小数点后四位
"""
print("%s的%s有%.2f斤,花费金额有%.2f元\n" % (who, how, amount, money))

"""
"25%%" 字符串中两个%表示输出一个%
"""
process = 25
print("进度已达%d%%" % process, end=" ")
print("25%", end="  ")
print(1, 2, 3, sep="-")
