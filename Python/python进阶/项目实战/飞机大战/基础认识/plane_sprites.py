import pygame

# 屏幕尺寸的常量
SCREEN_RECT = pygame.Rect(0, 0, 480, 700)
# 刷新帧率的常量
SCREEN_FPS = 120


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
