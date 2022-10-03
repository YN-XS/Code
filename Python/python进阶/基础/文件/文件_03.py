file1 = open("doc1.txt", "r", encoding="UTF-8")
file2 = open("doc2.txt", "w", encoding="UTF-8")
while True:
    txt1 = file1.readline()
    if not txt1:
        break
    file2.write(txt1)

file1.close()
file2.close()
