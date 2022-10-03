# a, b, c = eval(input())
# ls = []
# for i in range(c):
#     ls.append(a*b**i)
# print(ls)

a, b, c = eval(input())
ls = []
for i in range(c):
    ls.append(str(a*b**i))
print(ls)
print(",".join(ls))