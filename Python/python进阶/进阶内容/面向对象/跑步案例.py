class Person:
    def __init__(self, name, weight):
        self.name = name
        self.weight = weight

    def run(self):
        self.weight -= 0.5
        print("%s跑步后体重减少了0.5kg" % self.name)

    def eat(self):
        self.weight += 1
        print("%s吃饭后体重增加了1kg" % self.name)

    def __str__(self):
        return "%s的体重为%.1fkg" % (self.name, self.weight)

    def __del__(self):
        print("%s的最终体重为%.1fkg" % (self.name, self.weight))


xiaoming = Person("小明", 75)
xiaoshu = Person("小舒", 45)
print(xiaoming)
print(xiaoshu)
xiaoming.run()
xiaoming.eat()
xiaoshu.run()
xiaoshu.eat()
