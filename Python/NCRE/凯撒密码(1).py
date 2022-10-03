# 凯撒密码

# 加密
passward1=input('请输入明文')
for i in passward1:         # 设置变量i来遍历整个passwad的元素
    if i>='a'and i<='z':     # python中可以直接写成  'a'<=i<='z'
        print(chr(ord('a')+(ord(i)-ord('a')+3)%26),end='')# ！！最后三位需要返回前面
    elif i >='A'and i<='Z':
        print(chr(ord('A')+(ord(i)-ord('A')+3)%26),end='')
    elif ord(i)>=0x4E00 and ord(i)<=0x9FA5:
        print(chr(ord(i)+3),end='')    # 汉字范围共20902个字
    else:
        print(i,end='')
print('\n')
# 解密
passward2=input('请输入密文')
for i in passward2:           # 设置变量i来遍历整个passwad的元素
    if i>='a'and i<='z':    
        print(chr(ord('a')+(ord(i)-ord('a')-3)%26),end='')
    elif i >='A'and i<='Z':
        print(chr(ord('A')+(ord(i)-ord('A')-3)%26),end='')
    else:
        print(i,end='')
        
# !!注意  -1%26==25  -27%26==25  1%-26==-25  27%-26==-25 ！！！！！！！
        
