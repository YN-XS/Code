file = open("doc1.txt", "r", encoding="UTF-8")
txt1 = file.read()
print(txt1)

print("-" * 50)

txt2 = file.read()
print(txt2)
file.close()
