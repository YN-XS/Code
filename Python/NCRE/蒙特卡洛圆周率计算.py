from random import random
import time
'''
已经用from引入了确定的函数就不在需要输入前缀再使用函数
'''
start = time.perf_counter()
DATAS = 100
bili = 0.0
pi = 0.0
for i in range(DATAS+1):
    x, y = random(), random()
    banjin = pow(x**2+y**2,0.5)
    if banjin < 1:
        bili += 1
    jindu = i / DATAS *100
    a = 50*i//DATAS * '*'
    b = 50*(DATAS - i)//DATAS*'-'
    time.sleep(0.1)
    print('\r{:.2f}% [{}->{}]'.format(jindu,a,b),end = '')
process = time.perf_counter() - start
pi = 4 * (bili/DATAS)
print('\n')
print('圆周率是{:.20f}'.format(pi))
print('计算的时间为{:.5f}s'.format(process))