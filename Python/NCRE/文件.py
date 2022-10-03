# wenjian = open("数据.txt","w+")
# list1 = list(("中国，","法国，","美国，"))
# wenjian.writelines(list1)
# wenjian.write("中华人民共和国")
# wenjian.seek(0)    #！！！！！！一定要注意文件指针的所在位置！！！！！
# print(wenjian)    #直接打印问文件将会返回文件的相关信息，而不会返回文件内部的内容
# print(wenjian.read(100))
# wenjian.seek(0)
# for i in wenjian:
#     print(i)      #使用for循环遍历文件才会返回文件中的内容
# wenjian.close()


# fi = open("sensor.txt","r").read()
# fo = open("earpa001.txt","w")
# print(fi)
# print(type(fi))
# for line in range(len(fi)):
#     fi[line] = fi[line].split(',')
#     if fi[line][1].count('earpa001') == 1:
#         fo.write('{},{},{},{}\n'.format(fi[line][0],fi[line][1],fi[line][2],fi[line][3]))
#
# list1 = [["jiang","zi"],["jun",0]]
# if list1[0][0] =='jian1g':
#     print("1")
# else:
# #     print("0")
# a = 1
# b =2
# def f(a,b):
#     return a+b
# print(f(2,4))
# s = "jiang zi jun"
# s.center(20,'@')
# s.strip('@')
# '2'.join(s)
# s.split()
# print(s)



