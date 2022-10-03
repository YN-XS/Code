class Animal:
    def eat(self):
        print("吃吃吃")


class Dog(Animal):
    def bark(self):
        print("狗吠：汪汪汪")


class XiaoTianQuan(Dog):
    def bark(self):   # 对父类的方法进行重写
        super().bark()  # 取出父类中的该方法
        print("神犬呼啸")  # 在父类方法基础上的扩展


dog = XiaoTianQuan()
dog.eat()
dog.bark()
