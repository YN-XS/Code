import random
import pygame


# 屏幕尺寸的常量
SCREEN_RECT = pygame.Rect(0, 0, 480, 700)
# 刷新帧率的常量
SCREEN_FPS = 120
# 定时器事件常量
CREATE_ENEMY_EVENT = pygame.USEREVENT
# 定时器事件常量
FIRE_FREQUENCY = pygame.USEREVENT + 1


class GameSprite(pygame.sprite.Sprite):
    """游戏精灵"""
    def __init__(self, image_name, speed=1):
        # 调用父类的方法，是在子类重写的方法中使用super().父类方法()
        super().__init__()
        self.image = image_name
        # image的get_rect()方法可以获取图像的矩形位置（x，y，width，height）
        self.rect = self.image.get_rect()
        self.speed = speed

    def update(self):
        # 在屏幕的垂直方向移动
        self.rect.y += self.speed


class BackGround(GameSprite):
    """背景精灵"""
    # 初始化
    def __init__(self, is_alt=False):
        bg_img = pygame.image.load("./images/background.png")
        super().__init__(bg_img)
        if is_alt:  # 默认不执行，矩形区域由image的get_rect方法获取
            self.rect.y = -self.rect.height

    # 重写更新位置方法
    def update(self):
        super().update()
        if self.rect.y >= self.rect.height:
            self.rect.y = -self.rect.height


class Enemy(GameSprite):
    """敌机精灵"""
    def __init__(self):
        # 加载敌机图片
        enemy_img1 = pygame.image.load("./images/enemy1.png")
        # enemy_img2 = pygame.image.load("./images/enemy2.png")
        # enemy_img3 = pygame.image.load("./images/enemy3_n1.png")
        # enemy_img4 = pygame.image.load("./images/enemy3_n2.png")
        # 调用方法创建并初始化精灵
        super().__init__(enemy_img1)
        # 敌机随机速度
        self.speed = random.randint(1, 3)
        # 敌机随机位置
        self.rect.x = random.randint(0, SCREEN_RECT.width-self.rect.width)
        self.rect.y = 0 - self.rect.height  # 相当于self.rect.bottom = 0

    def update(self):
        # 调用从父类继承的垂直移动
        super().update()
        # 判断是否废除屏幕，是则从精灵组中删除敌机
        if self.rect.y >= SCREEN_RECT.height:
            self.kill()

    def __del__(self):
        # 对象被销毁前执行的代码
        print("敌机销毁：坐标%s" % self.rect)


class Plane(GameSprite):
    def __init__(self):
        plane_img = pygame.image.load("./images/me1.png")
        # 调用父类方法指定图像和速度
        super().__init__(plane_img, 0)
        # 创建子弹精灵组
        self.bullet_group = pygame.sprite.Group()
        # 设置初始位置
        self.rect.centerx = SCREEN_RECT.centerx
        self.rect.bottom = SCREEN_RECT.bottom - 120
        # 设置初始速度
        self.turn_speed = 0
        self.go_speed = 0

    def update(self):
        # 移动
        self.rect.x += self.turn_speed
        self.rect.y += self.go_speed
        # 控制移动范围边界
        if self.rect.x <= 0:
            self.rect.x = 0
        elif self.rect.x >= SCREEN_RECT.width-self.rect.width:
            self.rect.x = SCREEN_RECT.width-self.rect.width
        elif self.rect.y >= SCREEN_RECT.height-self.rect.height:
            self.rect.y = SCREEN_RECT.height-self.rect.height
        elif self.rect.y <= 0:
            self.rect.y = 0

    def fire(self):
        # 连续三发子弹，分别距离飞机顶部y 0*20/1*20/2*20
        for i in [0, 1, 2]:
            # 创建子弹精灵
            bullet = Bullet()
            # 设置子弹精灵位置
            bullet.rect.bottom = self.rect.y - 20 * i
            bullet.rect.centerx = self.rect.centerx
            # bullet.rect.x = (self.rect.right-self.rect.left)/2
            # 将精灵添加到精灵组
            self.bullet_group.add(bullet)


class Bullet(GameSprite):
    def __init__(self):
        bullet_img = pygame.image.load("./images/bullet1.png")
        super().__init__(bullet_img, -1)

    def update(self):
        super().update()
        if self.rect.bottom <= 0:
            self.kill()

    def __del__(self):
        print("子弹销毁，坐标“%s" % self.rect)
