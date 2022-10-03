str1 = "我的外号是\"西瓜\""
str2 = '我的外号是"西瓜"'
print(str1, str2, sep="\n")
print(str1[5], str2[5], sep="--")

for char in str1:
    print(char, end=" ")
print("\n")

# 字符串切片
"""
顾首不顾尾
"""
num_str0 = "0123456789"
num_str1 = num_str0[2:6]
num_str2 = num_str0[2:]
num_str3 = num_str0[:6]
num_str4 = num_str0[:]
num_str5 = num_str0[::2]
num_str6 = num_str0[1::2]
num_str7 = num_str0[2:-1]
num_str8 = num_str0[-2:]
num_str9 = num_str0[::-1]
print(num_str0, num_str1, num_str2, num_str3, num_str4, num_str5, num_str6, num_str7, num_str8, num_str9)
