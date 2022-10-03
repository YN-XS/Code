#判断输入的整数是否在0到100之间
num=eval(input())
if num>100:
    print('你输入的数大于100')
elif num<0:
    print('你输入的数小于0')
else:
    print('输入的数在0到100之间')
