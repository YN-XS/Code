s = input()
d = []
while s != '0':
    ls = s.split()[1:]
    length = len(ls)
    for i in range(length-1):
        for j in range(length - i - 1):
            if abs(int(ls[j])) < abs(int(ls[j+1])):
                ls[j] , ls[j+1] = ls[j+1] ,ls[j]
    d.append(ls)
    s = input()
for i in d:
    for j in i:
        print(j, end=" ")
    print()
