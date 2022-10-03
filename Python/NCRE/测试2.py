# dict1 = {"name1":1,"name2":2,"name3":3}
# print(dict1)
# list1 = list(dict1.items())
# print(list1)
# print(list1[0])
# print(list1[0][0])
# print(list1[0][1])
#
# list2 = list(dict1)
# print(list2)
# print(list2[0][0])
# print(list2[0][1])
# txt = open("命运.txt", "r", encoding="utf-8").read()
# for ch in ' \n':
#     txt = txt.replace(ch, "")
# d = {}
# for ch in txt:
#     d[ch] = d.get(ch, 0) + 1
# ls = list(d.items())
# ls.sort(key=lambda x: x[1], reverse=True)  # 此行可以按照词频由高到低排序
# string = ""
# for i in range(len(ls)):
#     s = str(ls[i]).strip("()")
#     print(s)
    # if i < len(ls) - 1:
    #     string = string + s[1] + ':' + s[5:] + ','
    # else:
    #     string = string + s[1] + ':' + s[5:]
# f = open("命运-频次排序.txt", "w", encoding="utf-8")
# f.write(string)
# f.close()
# dict1 = {"是":1,'发':3}
# list1 = list(dict1.items())
# print(list1)
# s = ""
# for i in range(2):
#     str(list1[i]).strip('()')
#     print(i)

# txt = open("命运.txt", "r", encoding="utf-8").read()
# for ch in ' \n':
#     txt = txt.replace(ch, "")
# d = {}
# for ch in txt:
#     d[ch] = d.get(ch, 0) + 1
# ls = list(d.items())
# ls.sort(key=lambda x: x[1], reverse=True)  # 此行可以按照词频由高到低排序
# string = ""
# for i in range(len(ls)):
#     s = str(ls[i]).strip("()")
#     string = string + s[1] + ':' + s[5:] +','
# string = string[0:len(string) - 1]
# f = open("命运-频次排序.txt", "w", encoding="utf-8")
# f.write(string)
# f.close()
# for i in "jiang":
#     if i == 'a':
#         continue
#     else:
#         print(i)
# for i in "jiang":
#     if i == 'a':
#         continue
#     print(i)

# list1 = list((1,2,3))
# print(list1)
# print(list(list1))
# list2 = [4,5,6]
# list1 = list2
# print(list1)

f = open("数据.txt","rt").read()
print(f)