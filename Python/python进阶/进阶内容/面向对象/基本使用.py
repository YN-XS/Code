class Cat:
    # 对象生命周期的开始
    def __init__(self, new_name, new_gender):
        self.name = new_name  # 私有属性（根据对象传入参数不同而不同）
        self.gender = new_gender  # 私有属性（根据对象传入参数不同而不同）
        self.hobby = "吃鱼"   # 共有属性（所有对象的该属性都固定为字符串"吃鱼"）

    def info(self):
        print("%s的性别是%s，喜欢%s" % (self.name, self.gender, self.hobby))

    def __str__(self):
        return "我是%s" % self.name

    # 对象生命周期的结束
    def __del__(self):
        print("%s离开了" % self.name)


cat1 = Cat("加菲猫", "男")
cat2 = Cat("凯蒂猫", "女")
cat1.info()
cat2.info()
print(cat2)