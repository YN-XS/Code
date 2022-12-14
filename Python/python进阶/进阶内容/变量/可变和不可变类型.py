"""
可变类型与不可变类型
数据（值）相同时
多个变量若引用的数据全由不可变类型————这多个变量所保存的数据是同一个（数据保存在同一个内存地址）
多个变量若引用的数据包含可变类型————这多个变量保存的数据不是同一个（数据保存在不同的内存地址）
注意当多个变量引用的同一个数据与列表字典有关，则一定不是同一个数据
平常使用多个变量引用的同一个不可变类型，则一定是同一个数据
"""
"""
可变类型：内存中的数据可以被修改
1.可变类型的数据变化，通过方法实现
2.若给可变类型的变量赋值了新的数据，引用（保存的内存地址）会修改
列表 list
字典 dict (字典中的key是唯一的，key只能是不可变类型的数据 )

不可变类型：内存中的数据不允许被修改
(返回一个新的数据，不会对原始数据做修改)
数字 int bool float complex
字符串 str
元组 tuple
"""

dict1 = {"str": "字符串", 100: "数字", (1, 2): "元组"}
print(dict1)

# 哈希函数 hash，接收一个不可变类型的数据，返回一个整数
# 提取传入数据的特征码 （类似与指纹）
result = hash("姜子俊")
print(result)

