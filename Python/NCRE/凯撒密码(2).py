# 凯撒密码

s1='JZJ'
s2='YS'
d={}
for c in (65,97):       # 只有两个字符“a”和“A”
    for i in range(26): # “a”和“A”加上[0:25]可以取到所有大小写的字母
        d[chr(c+i)]=chr((i+13)%26+c)
print(''.join(d.get(c,c) for c in s1))
print(''.join(d.get(c,c) for c in s2))
