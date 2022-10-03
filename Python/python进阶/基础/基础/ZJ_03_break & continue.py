for i in range(0, 10):
    if i == 5:
        break      # 跳出当前的整个循环体
    print(i, end="——")

print("\n")

for i in range(0, 10):
    if i == 5:
        continue  # 跳过这次循环的后续代码指令，直接进入下一次循环
    print(i, end="——")

print("\n")


"""
while循环需要注意，当执行到continue 将不再执行后续代码，循环记数不再变化，会陷入死循环
"""
i = 0          # 循环体变量
while i < 10:
    if i == 5:
        i = i + 1     # 在执行continue之前执行记数，防止陷入死循环
        continue      # continue 会跳过后续代码，直接进入下一次循环
    print(i, end="——")
    i = i + 1    # while循环的记数+1
