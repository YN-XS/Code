class Father:
    def __init__(self):
        self.__age = "老年"

    def __hobby(self):
        print("我也喜欢%s" % "看动漫")

    def info(self):
        print("岁月不饶人，我已经是%s了" % self.__age)


class Son(Father):
    pass


JS = Son()
JS.info()
