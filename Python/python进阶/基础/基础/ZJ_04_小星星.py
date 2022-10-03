i = 1    # 计数器变量
while i <= 5:
    j = 1      # 计数器变量
    while j <= i:  # 不然 i 和 j 同时增加，第二个循环始终只能执行一次
        print("*", end="")
        j = j + 1    # while 计数器变量+1
    i = i + 1  # while 计数器变量+1
    print("")

for i in range(5):
    for j in range(5):
        if j <= i:
            print("*", end="")
    print("")

for i in range(6):
    print("*" * i)

i = 1   # 计数器变量
while i <= 5:
    print("*" * i)
    i = i + 1    # while 计数器变量+1
