class Student:
    def __init__(self, name):
        self.name = name
        self.__gender = "girl"
        self.__age = 20

    def sut_info(self):
        print("%s小朋友的年龄是%d" % (self.name, self.__age))

    def __sut_age(self):
        print("%s小朋友的年龄是%d" % (self.name, self.__age))


stu_one = Student("杨舒")
print(stu_one.name)
stu_one.sut_info()
