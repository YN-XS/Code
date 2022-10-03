import re

ss = """姜子俊 
123 
python
java
C++ 
C#
"""
# \w只取单词（汉字、字母、数字、下划线）
pattern1 = re.compile(r'\w{3,4}')
# 指定标记(flag)：使用ASCII模式后可以排除汉字 (ASCII / A)
pattern2 = re.compile(r'\w{3,4}', re.ASCII)
print(pattern1.findall(ss))
print(pattern2.findall(ss))
