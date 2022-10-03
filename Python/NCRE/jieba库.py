def getText():
    txt = open("123.txt","r").read()
    txt = txt.lower()
    for i in "'/\-=[];.,":
        txt = txt.replace(i,' ')
        return txt
jzj = getText()
words = jzj.split()
num = {}
for j in words:
    num[j] = num.get(j,0)+1
item = list(num.items())
item.reverse()
for i in range(3):
    word ,count = item[i]
    print('{},{}'.format(word,count))
