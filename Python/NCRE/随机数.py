import random
random.seed(10)
a = random.random()
'''
random.random()  产生0到1的小数
'''
b = random.uniform(1, 100)
c = random.randint(1, 100)
d = random.randrange(1, 100, 10)
e = random.getrandbits(10)
f = [1, 2, 3, 4, 5]
random.shuffle(f)
'''
random.shuffle 是将原来的序列打乱，不产生新的序列，所以不是赋值
'''
h = random.choice(f)
print(a, b, c, d, e,  f, h)
'''
！！！！！！不同的随机数种子 random.seed() 所产生的所有随机数以及打乱和抽取都是不同的，同理若随机数种子相同则产生的随机数等都相同
！！！！！！也同样可以不使用随机数种子，这样会完全随机
'''
random.seed(20)
a = random.random()
'''
random.random()  产生0到1的小数
'''
b = random.uniform(1, 100)
c = random.randint(1, 100)
d = random.randrange(1, 100, 10)
e = random.getrandbits(10)
f = [1, 2, 3, 4, 5]
random.shuffle(f)
'''
random.shuffle 是将原来的序列打乱，不产生新的序列，所以不是赋值
'''
h = random.choice(f)
print(a, b, c, d, e,  f, h)
