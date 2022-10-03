j = 0   # 全局变量
for i in range(5):   # 其中 i 是局部变量 0——4
    j = j + 1
print("%d" % j)

i, j = 0, 0   # 全局变量
while i < 5:
    j = j + 1
    i = i + 1   # while循环要记得必须最后给使用的变量 记数+1
print("%d %d" % (i, j))

result = 0
for i in range(101):   # 0——100 顾首不顾尾
    result = result + i
print("0——100的结果是{}".format(result))

i = result = 0
while i <= 100:
    if i % 2 == 0:
        result = result + i
    i = i + 1
print("0——100间偶数的累加是{}".format(result))

"""
for-else完整循环
"""
for i in range(10):
    if i == 7:
        print("循环体异常break跳出 oh my gad!")
        break
    print(i, end=" ")
else:
    print("循环体正常结束")

for i in range(10):
    if i == 10:
        print("循环体异常break跳出 oh my gad!")
        break
    print(i, end=" ")
else:
    print("循环体正常结束 oh yeah~")

# 循环
for i in range(1, 2):
    print("range(n,n+1)执行一次")
    print("range(n,n)不执行")
for i in range(1, 1):
    print("range(n,n)不执行")
