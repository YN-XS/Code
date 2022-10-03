# range函数
# 返回的是一组数列
range1 = range(10)
print(range1)
print(type(range1))
for i in range1:
    print(i, end=" ")
print("")

# round函数
# 四舍五入，有限小数默认保留一位小数
# 若是无限小数，则可以选定保留小数位数
a = 5
b = 3
# 直接交换值
a, b = a+b, a
# 有限小数，即使选择了保留位数，依然只保留一位小数
print(round(1/3, 3))
print(round(a/b, 3))

# 百钱买百鸡
for i in range(1, 101):
    for j in range(1, 101):
        for k in range(1, 101):
            # 嵌套循环从所有的可能性出找到符合条件的值
            if i*5+j*3+k*1/3 == 100 and i+j+k == 100:
                print("公鸡：{}只 母鸡：{}只 小鸡：{}只".format(i, j, k))
