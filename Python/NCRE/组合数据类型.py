'''
①集合类型： set()    {}  元素唯一，不可变数据类型，而且元素之间没有顺序
'''
A = {'python',123,(1,2,3),}  #列表类型和字典类型都是可变类型，不能作为集合的元素
print(A)
B = set('13')
print(B)
C = set('112233')  #字符串被集合化后，每个字符被无序排列，且无重复
print(C)
bingji = B|C
chaji = C-B
jiaoji = B&C
buji = B^C  #除了交集的集合
print('并集是{}，差集是{}，交集是{}，补集是{}'.format(bingji,chaji,jiaoji,buji))
print(C>=B,B>=C)
B.add('2') #添加元素
B.discard('1') #除去元素，元素不存在不报错
B.remove('2') #除去元素，元素不存在产生Key Rrror异常
B.clear()   #除去所有元素
D = B.copy()  # 产生一个副本
print(len(B))  # 计算集合中的元素个数
print('X' in B)  #判断'X'是否在集合B中，返回True或False
print(C.pop())  #随机取出集合中的元素，原集合被改变
print(B,C)
list1 = list([1,1,2,2,3,3])  #!!!注意list()和set()函数是将其他组合类型转换成函数类型，括号里面必须为组合类型
set1 = set(list1)      #!!!(在加一对括号，或者中括号，或者原本就是组合类型)
print(list1,set1)      #数据去重：将其他组合类型转换成集合类型可以除去原本重复的元素！！
'''
②列表类型：list()   []  元素不唯一，元素之间有顺序，可以使用索引切片（顾首不顾尾）
'''
list2 = list((1,3,2,3,3))
list3 = list((4,5,6,))
print(list2+list3)  #将两个列表连接起来
print(list2*2)  #复制原列表2次
print('元素个数{},最大元素{},最小元素{}'.format(len(list1),max(list1),min(list1)))
print('3第一次出现的索引位置{},3在2：-1第一次出现的索引位置{}'.format(list2.index(3),list2.index(3,2,-1)))  #注意这里的index(元素，起始位置，结束位置)这里的范围中间用逗号隔开
print(list2.count(3))
list2.insert(0,100)  # 在指定位置前面添加一个新元素
print(list2)
'''
③元组类型 tuple()   ()是一种不能被修改的类型
'''

'''
④字典类型 dict()    {}  键值对逗号隔开，键和值冒号隔开
'''
dict1 = {1:'jiang',2:'zi',3:'jun',4:4}
print(dict1,dict1[1])
print(dict1.popitem())  #随机取出一个键值对，并以元组的形式返回
print(dict1[1])    #以键为索引
print(dict1.pop(6,'bucunzai'),dict1)    #取出填入的键所对应的值，没有对应的键则返回第二个参数
dict1[5] = 'yangshu'   #给一个新的键赋值则可以直接添加到字典中，已存在则覆盖之前的
print(dict1.get(2),dict1)

dict1 = {1:'jiang',2:'zi',3:'jun'}
print(dict1)
list1 = list(dict1.keys())
list2 = list(dict1.values())
list3 = list((dict1.items()))
print(list1,list2,list3)
print(list3[0])
