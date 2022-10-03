def func():
    print("交错求和")
    a = 1
    b = 2
    c = 2
    n = eval(input("请输入多项式的项数："))
    flag = 1
    result = 1 - 0.5
    for i in range(n - 2):
        a, b = b, a + b
        result = result + flag * c / b
        flag = - flag
        c = c + 1
    print("{}项的结果是{:.6f}".format(n, result))


def leap_year():
    year1 = eval(input("请输入需要判断的年份："))
    if year1 % 4 == 0 and year1 % 100 != 0 or year1 % 400 == 0:
        """
        注意：能被整除说明余数等于0 用 %
        而不是用整除号，整除号只是取出商
        """
        print("闰年：今年有366天(2月有29天)")
    else:
        print("平年：今年有365天(2月有28天)")


def when():
    date = input("请输入日期：年/月/日：").split("/")
    date_list = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    year = eval(date[0])
    month = eval(date[1])
    day = eval(date[2])
    days = 0
    if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
        # 由于闰年的二月底多了一天，但是二月底前的天数不会改变
        # 所以不能简单给所有闰年的日期的全年天数+1
        date_list[1] = 29
    for i in range(month-1):
        days = days + date_list[i]
    days = days + day
    print("{}年{}月{}日是{}年第{}天".format(year, month, day, year, days))


def is_triangle():
    a = eval(input("请输入三角形第一条边长："))
    b = eval(input("请输入三角形第二条边长："))
    c = eval(input("请输入三角形第三条边长："))
    list1 = [a, b, c]
    list1.sort()
    if list1[0] <= 0 or list1[0]+list1[1] < list1[2]:
        print("NO")
    elif pow(list1[0], 2) + pow(list1[1], 2) == pow(list1[2], 2):
        print("YES")
    else:
        print("NO")


'''
p = (a+b+c)/2
area = pow(p*(p-a)*(p-b)*(p-c),0.5)
'''


def triangle_area():
    a = eval(input("请输入三角形第一条边长："))
    b = eval(input("请输入三角形第二条边长："))
    c = eval(input("请输入三角形第三条边长："))
    minx = min(a, b, c)
    max1 = max(a, b, c)
    middle = a + b + c - minx - max1
    p = (a + b + c) / 2
    area = pow(p * (p - a) * (p - b) * (p - c), 0.5)
    if minx < 0 or minx + middle <= max1:
        print("NO")
    else:
        print("YES")
        print("{:.2f}".format(area))
