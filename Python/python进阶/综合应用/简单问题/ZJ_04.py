def func(num):
    # 如果if语句不执行，也能保证定义有 num1 和 num2 能被 return
    # 否则则会导致报错：”先引用后定义“
    num1 = num2 = 0
    if num % 2 == 0:
        num1 = num//4+(num % 4)/2
        num2 = num/2
    return num1, num2


list1 = []
chick = 2
rabbit = 4
n = eval(input())
for i in range(n):
    feet = eval(input())
    list1.append(func(feet))
for i in list1:
    print(i[0], end=" ")
    print(i[1])
