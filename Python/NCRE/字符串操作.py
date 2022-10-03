# 字符串操作符
x,y='yang','shu'
print(x+y)   # 字符串拼接
print(x*3+y*3)    # 字符串多次复制
print('ya' in x)

# 字符串处理函数

x='yangshu'
y=100  # 整数形式
print(len(x))  # 返回字符串长度
print(type(y))
print(type(str(y)))  # 返回字符串形式
print(hex(100)) # 返回十六进制小写字符串
print(oct(100)) # 返回八进制小写字符串
print(chr(20426)) # 返回unicode编码对应的字符
print(ord('俊')) # 返回字符对应的unicode编码

# 字符串处理方法
s1='Jzj'
s2=s1.lower()
s3=s1.upper()
print(s1,s2,s3)

s4='jiang*zi*jun'.split(sep='*')  # 返回一个列表，根据sep来划分，省略sep则默认按空格划分
print(s4)

print('JIANGZIJUN'.count('J'))  # 判断子字符串出现的次数

s5='JIANGzijun'.replace('zijun','ZIJUN')
print(s5)    # 将字符串中的字符替换  str.replace(old,new)

print('JZJ'.center(11,'*')) # 居中字符串  str.center(宽度，填充)  先宽度后填充！！！

print('****姜子俊****'.strip('*'))  # 将字符串左右两侧的指定字符删除

print('*'.join('JIANGZIJUN'))  # 指定变量后每个元素后加入一个前面的字符串
                               # str.jion(变量)
