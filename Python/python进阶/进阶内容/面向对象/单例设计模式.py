class Person:
    instance = None
    init_flag = False

    def __new__(cls, *args, **kwargs):
        if cls.instance is None:
            cls.instance = super().__new__(cls)
        return cls.instance

    def __init__(self):
        if Person.init_flag:
            return
        print("初始化成功")
        Person.init_flag = True


a = Person()
print(a)
b = Person()
print(b)
