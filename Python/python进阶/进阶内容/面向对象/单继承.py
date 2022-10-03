class Animal:
    def __init__(self):
        self.type = "animal"
        self.gender = "boy"

    def eat(self):
        print("吃吃吃")

    def __str__(self):
        return "种类：%s\n性别：%s" % (self.type, self.gender)


class Dog(Animal):
    def bark(self):
        print("狗吠：汪汪汪")


WangCai = Dog()
WangCai.bark()
WangCai.eat()
print(WangCai)
