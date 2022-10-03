class Gun:
    def __init__(self, model):
        self.model = model  # 特有属性
        self.bullet_count = 0  # 公共属性

    def __str__(self):
        return "一把%s [%d/45]" % (self.model, self.bullet_count)

    def add_bullet(self, bullet_count):
        if self.bullet_count + bullet_count >= 45:
            self.bullet_count = 45
            print("已装载子弹最大装载量！ [%d/45]" % self.bullet_count)
            return  # 执行return后，return下方的代码将不会被执行
        self.bullet_count += bullet_count
        print("装载完成 [%d/45]" % self.bullet_count)

    def shoot(self, bullet_count):
        if bullet_count >= self.bullet_count:
            self.bullet_count = 0
            print("子弹用尽[%d/45]" % self.bullet_count)
            return  # return下方的代码将不会被执行
        self.bullet_count -= bullet_count
        print("[%s]突突突... [%d/45]" % (self.model, self.bullet_count))


class Soldier:
    def __init__(self, name):
        self.name = name
        self.gun = None

    def fire(self, bullet_count):
        if self.gun is None:  # 身份运算符 is 和 is not
            print("%s还没有枪" % self.name)
            return
        print("冲啊！我%s有%s" % (self.name, self.gun.model))
        self.gun.add_bullet(45)
        self.gun.shoot(bullet_count)


AK47 = Gun("AK47")  # 创建枪对象
print(AK47)
soldier = Soldier("周卫国")  # 创建士兵对象
soldier.gun = AK47  # 将已有对象作为另一个对象的属性
soldier.fire(30)