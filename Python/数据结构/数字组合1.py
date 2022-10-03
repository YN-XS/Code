# 求a+b+c=1000并且a的平方+b的平方=c的平方的[a,b,c]组合
import time
time_start = time.time()
for a in range(1001):
    for b in range(1001):
        for c in range(1001):
            if a + b + c == 1000 and pow(a, 2)+pow(b, 2) == pow(c, 2):
                print("[a:%d b:%d c:%d]" % (a, b, c))
time_finish = time.time()
time = time_finish - time_start
print("花费总时长：%f" % time)
                