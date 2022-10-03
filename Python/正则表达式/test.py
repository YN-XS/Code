import re

s = "苹果绿色，葡萄紫色，香蕉黄色，桃子粉色"

# re.compile(r'正则表达式')—>生成一个pattern类
pattern = re.compile(r'.色')
# pattern类.findall("查询的文本")
# 可以根据生成pattern类的正则表达式从"文本"中提取中复合条件的元素[列表]
ls = pattern.findall(s)

print(type(ls))
print(ls)

for i in pattern.findall(s):
    print(i, end="/")



