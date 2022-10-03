# ① 使用第三个变量
a = 1
b = 2
print("a的值为：%d，b的值为：%d" % (a, b))
c = a
a = b
b = c
print("a的值为：%d，b的值为：%d" % (a, b))
print("-" * 20)

# ② 高级用法
a = 1
b = 2
print("a的值为：%d，b的值为：%d" % (a, b))
a = a + b
b = a - b
a = a - b
print("a的值为：%d，b的值为：%d" % (a, b))
print("-" * 20)

# ③ python特有元组法:多个变量接收元组中的元素
a = 1
b = 2
print("a的值为：%d，b的值为：%d" % (a, b))
"a, b = (b, a)，有元素和逗号即可定义元组，括号可以省略"
a, b = b, a
print("a的值为：%d，b的值为：%d" % (a, b))
