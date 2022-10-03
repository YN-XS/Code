# 续航符以及format
print('{}岁的{}喜欢的网名是{}'.format(12,\
                              '姜子俊',\
                              '心释'))

cities=''
name=input('请输入你的名字')
for i in range(1,5):
    city=input("请输入你去过的城市，输入字符'结束'跳出")
    if city=='结束':
        break
    cities=cities+city+' '
print('{}去过的城市有{}'.format(name,cities))


