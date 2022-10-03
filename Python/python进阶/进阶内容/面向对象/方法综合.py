class Game:
    top_score = 60

    @classmethod
    def show_top_score(cls):
        print("当前最高得分为：%d分" % cls.top_score)

    @staticmethod
    def show_help():
        print("开始游戏")

    def __init__(self, name, score):
        self.name = name
        self.score = score

    def play(self):
        if self.score > Game.top_score:
            Game.top_score = self.score


Game.show_top_score()   # 类名调用类方法
Game.show_help()    # 类名调用静态方法
print(Game.top_score)   # 类名访问类属性
player1 = Game("姜子俊", 200)
player1.play()    # 实例调用实例方法
Game.show_top_score()   # 实例名调用类方法
player1.show_help()   # 实例名调用静态方法
print(player1.top_score)  # 实例名访问类属性
