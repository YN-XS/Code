file = open("doc1.txt", "r", encoding="UTF-8")

while True:
    txt = file.readline()
    if not txt:   # 如果txt没有读取到内容，读取结束，跳出循环
        break
    print(txt)

file.close()
