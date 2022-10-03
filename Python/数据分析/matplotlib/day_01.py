from matplotlib import pyplot as plt

x = range(2, 26, 2)
y = [25, 16, 22, 28, 33, 34, 35, 36, 33, 28, 23, 19]

# 设置图片大小以及每英寸像素点数量
fig = plt.figure(figsize=(12, 8), dpi=80)

# 绘图
plt.plot(x, y)

# 设置坐标轴刻度
plt.xticks(range(2, 26, 2))
plt.yticks((range(min(y), max(y)+1)))


# 保存
# plt.savefig("./1.png")

# 展示图形
plt.show()
