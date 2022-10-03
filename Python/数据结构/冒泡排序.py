def bubble_sort(list1):
    n = len(list1)
    for i in range(n-1):     # 对于n个数据，需要排序n-1趟就能排序完成(第一个循环只需要考虑趟数即可)
        flag = False
        for j in range(n-i-1):   # 每一趟可以排好当前数据中的一个最值
            if list1[j] > list1[j+1]:  # >和<的区别在于每次把两个数中的较大值或较小值放到后面
                list1[j], list1[j+1] = list1[j+1], list1[j]
                flag = True
        if flag:
            print(list1)
        else:    # 如果没有发生交换，则说明已经排好序
            break


if __name__ == "__main__":
    import random
    import time
    random.seed(1)
    time_start = time.time()
    list_info = []
    for k in range(10):
        list_info.append(random.randint(1, 100))
    print(list_info)
    bubble_sort(list_info)
    time_finish = time.time()
    time = time_finish - time_start
    if time != 0:
        print("运行时间：%f" % time)
