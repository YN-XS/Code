import re

numbers = """
15157093269
15700022360
13469480898
18374592902
-----------
1+3003927494
1.1242343
1522543
1ABCDEFGHIJKLMNOPQRSTUVWXYZ
"""

# 方括号：匹配列表[]中的字符
# 花括号：匹配字符的数量{n} {m,n} {m,}
pattern1 = re.compile(r'1[3,5]\d{9}')
ls1 = pattern1.findall(numbers)
print(ls1)

# 【单个】【有特殊含义】的字符(限定符)，在方括号中 和 反斜杠之后都表示普通的匹配字符，无特殊含义
pattern2 = re.compile(r'\d[.+]\d+')
ls2 = pattern2.findall(numbers)
print(ls2)

# 在方括号前加^号：表示（非）不取方括号中的元素
pattern3 = re.compile(r'1[^\d\n]+')
ls3 = pattern3.findall(numbers)
print(ls3)
