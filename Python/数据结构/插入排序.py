def insert_sort(alist):
    n = len(alist)
    for i in range(1, n):
        insert_val = alist[i]
        j = i
        while j > 0:
            if alist[j-1] > insert_val:
                alist[j] = alist[j-1]
            else:
                insert_index = j
                alist[insert_index] = insert_val
                print(alist)
                break
            j = j - 1


def insert_sort1(alist):
    n = len(alist)
    for i in range(1, n):
        j = i
        while j > 0:
            if alist[j-1] > alist[j]:
                alist[j], alist[j-1] = alist[j-1], alist[j]
            else:
                print(alist)
                break
            j = j - 1


if __name__ == "__main__":
    list_info = [1, 54, 23, 79, 39, 50, 30, 86]
    print(list_info)
    insert_sort1(list_info)
