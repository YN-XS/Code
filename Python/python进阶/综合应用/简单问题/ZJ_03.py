print("A:%s,Z:%s" % (ord("A"), ord("Z")))
print("a:%s,z:%s" % (ord("a"), ord("z")))

# 字符大小写转换
string = input()
a = ""
for i in string:
    if 65 <= ord(i) <= 90:
        a = a+chr(ord(i)+32)
    elif 97 <= ord(i) <= 122:
        a = a+chr(ord(i)-32)
    else:
        a = a + i
print(a)

s = input()
for c in s:
    if c.islower():
        print(c.upper(), end='')
    elif c.isupper():
        print(c.lower(), end='')
    else:
        print(c, end='')
