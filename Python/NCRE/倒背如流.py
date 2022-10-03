# 正向索引
s=input('请输入一段话')
i=len(s)-1
while i>=0:
    print(s[i],end='')
    i=i-1

# 反向索引
c=input('请输入一段话')
j=-1
while j>=-1*len(c):
    print(c[i],end='')
    j=j-1

# 高级切片
x=input('请输入一段话')
k=x[ : :-1]
print(k)
