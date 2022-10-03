#输入用户的三个爱好并且一起输出
hobbies=''
for i in range(3):
    s=input('请输入你的三个爱好，输入Q或q结束')
    if s.upper()=='Q':   #注意==才表示相等，=表示赋值,记住而且Q是一个字符必须加引号
        break
    hobbies=hobbies+s+' '
print('你的爱好是：{}'.format(hobbies))
