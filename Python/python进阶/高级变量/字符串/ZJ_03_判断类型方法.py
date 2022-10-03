# 判断是否仅仅只包含 空白字符
# 空白字符（空格，\r,\n,\t等转义字符）
str1 = " \r \n \t "
print(str1)
print(str1.isspace())

# 判断是否仅仅包含 （整数）数字
num_str1 = "1"
num_str2 = "\u00b2"
num_str3 = "十"
print(num_str1, num_str1.isdecimal())  # 只能判断阿拉伯数字
print(num_str2, num_str2.isdigit())   # 还能判断Unicode字符串中的数字（上标平方）
print(num_str3, num_str3.isnumeric())  # 还能判断中文数字

# 判断是否以指定字符串开始
print("hello".startswith("h"))
# 判断是否以指定字符串结尾
print("hello".endswith("o"))
