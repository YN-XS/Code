"""
center(宽度，填充符)   居中
ljust(宽度，填充符)   左对齐
rjust(宽度，填充符)   右对齐
"""
poem = ["《望庐山瀑布》",
        "李白",
        "日照香炉生紫烟",
        "遥看瀑布挂前川",
        "飞流直下三千尺",
        "疑是银河落九天"]
for poem_str in poem:
    print("|%s|" % poem_str.center(20, "　"))

for poem_str in poem:
    print("|%s|" % poem_str.rjust(20, "　"))

for poem_str in poem:
    print("|%s|" % poem_str.ljust(20, "　"))
