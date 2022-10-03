# 统计字符串长度
# 空格也包括在内
str1 = "hello hello hello"
print(len(str1))

# 统计子字符串出现的次数
print(str1.count("llo"))
print(str1.count("x"))

# 子字符串出现的位置
print(str1.index("lo"))
