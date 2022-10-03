class Person:
    def __new__(cls, *args, **kwargs):
        print("自动调用__new__方法，创建对象，分配空间")
        instance = super().__new__(cls)
        return instance

    def __init__(self):
        print("初始化成功")


JZJ = Person()
print(JZJ)
