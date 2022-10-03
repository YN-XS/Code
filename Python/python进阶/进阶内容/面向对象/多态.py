class Person:
    def __init__(self, name):
        self.name = name

    def game(self):
        print("我叫%s，喜欢学习" % self.name)


class Boy(Person):
    def game(self):      # 重写父类中的方法
        super().game()   # 保留父类该方法的内容
        print("我还喜欢打游戏")   # 单独在父类方法基础上拓展


class Girl(Person):
    def game(self):      # 重写父类中的方法
        super().game()   # 保留父类该方法的内容
        print("我还喜欢看电视剧")   # 单独在父类方法基础上拓展


JZJ = Boy("姜子俊")
YS = Girl("杨舒")
JZJ.game()
YS.game()
