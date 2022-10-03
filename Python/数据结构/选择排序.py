def select_sort(alist):
    n = len(alist)
    for i in range(n-1):
        min_index = i
        for j in range(i+1, n):
            if alist[j] < alist[min_index]:
                min_index = j
        if min_index != i:
            alist[min_index], alist[i] = alist[i], alist[min_index]
            print(alist)


if __name__ == "__main__":
    import random
    import time
    time_start = time.time()
    random.seed(1)
    list_info = []
    for k in range(10):
        list_info.append(random.randint(1, 100))
    print(list_info)
    select_sort(list_info)
    time_finish = time.time()
    time = time_finish - time_start
    if time != 0:
        print("运行时间：%f" % time)
