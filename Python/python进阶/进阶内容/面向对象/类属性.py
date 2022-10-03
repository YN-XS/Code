class Person:
    instance_count = 0

    def __init__(self, name):
        self.name = name
        Person.instance_count += 1  # 每次创建一个实例对象


instance1 = Person("姜子俊")
instance2 = Person("杨舒")
instance3 = Person("周佳辉")
print("已创建实例对象 %d 个" % Person.instance_count)
