for i in range(1, 10):
    for j in range(1, 10):
        if j <= i:
            print("%d * %d = %d\t" % (i, j, i*j), end=" ")
            # 制表符 \t 协助输出文本在 垂直方向 保持对齐
    print("")

i = 1   # 计数器变量
while i < 10:
    j = 1   # 计数器变量
    while j <= i:
        print("%d * %d = %d\t" % (j, i, i*j), end=" ")
        j = j + 1    # while 计数器变量+1
    i = i + 1   # while 计数器变量+1
    print("")
