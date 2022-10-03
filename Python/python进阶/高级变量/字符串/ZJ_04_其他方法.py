str1 = "hello hello"
# 查找指定字符串
print(str1.index("el"))  # index 找不到指定元素则 报错
print(str1.find("el"))   # find 找不到指定元素返回 -1

# 替换字符串中的子字符串并返回新的字符串
"""
注意 replace 方法并不会改变原来的字符串
"""
str2 = str1.replace("hello", "python", 0)
str3 = str1.replace("hello", "python", 1)
str4 = str1.replace("hello", "python", 2)
print(str1, str2, str3, str4, sep="\n")

"""
strip 去除 两边 连续字符，返回新的字符串
注意 strip 方法并不会改变原来的字符串
"""
info_str0 = "\t \n 空白字符\t  \n"
print(info_str0)
print(info_str0.strip())
info_str1 = "***|**姜子俊**|***"
info_str2 = info_str1.lstrip("*")
info_str3 = info_str1.rstrip("*")
info_str4 = info_str1.strip("*")
print(info_str1)
print(info_str2)
print(info_str3)
print(info_str4)

