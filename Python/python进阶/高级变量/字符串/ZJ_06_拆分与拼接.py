poem = ["《望庐山瀑布》",
        "李白",
        "日照香炉生紫烟",
        "遥看瀑布挂前川",
        "飞流直下三千尺",
        "疑是银河落九天"]
poem_str = ""
for i in poem:
    poem_str = poem_str + i
print(poem_str)
poem_str = "\r《望庐山瀑布》\n李白\n日照香炉生紫烟\t遥看瀑布挂前川\t飞流直下三千尺\t疑是银河落九天\t"
print(poem_str)

"""
str.split()默认以所有的空白字符为间隔，返回以间隔中字符为元素的列表
"""
poem_list = poem_str.split()
print(poem_list)

"""
"string".join()，以string为分隔符将可迭代数据中的每一个元素拼接，返回一个巨大的字符串
"""
poem_string = "|".join(poem_list)
print(poem_string)
