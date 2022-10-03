class Father:
    def appearance1(self):
        print("单眼皮")


class Mother:
    def appearance2(self):
        print("厚嘴唇")


class Son(Mother, Father):
    pass


ZS = Son()
ZS.appearance1()    # 继承Father类的方法
ZS.appearance2()    # 继承Mother类的方法
print(dir(ZS))
