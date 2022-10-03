class Person:
    @staticmethod      # 在@staticmethod下定义静态方法
    def run():     # 静态方法不需要固定参数 self/cls
        print("作为人，我会跑")


Person.run()

JZJ = Person()
JZJ.run()
