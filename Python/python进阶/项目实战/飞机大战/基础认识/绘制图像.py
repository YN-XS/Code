import pygame
# 游戏初始化
pygame.init()
# 创建屏幕
screen = pygame.display.set_mode((480, 700))
# 背景绘制
background = pygame.image.load("../images/background.png")
screen.blit(background, (0, 0))
# 飞机绘制
plane = pygame.image.load("../images/me1.png")
screen.blit(plane, (180, 500))
# 更新屏幕显示(绘制的图像)
pygame.display.update()
# 创建游戏时钟
clock = pygame.time.Clock()
# 游戏循环
i = 0
while True:
    # 指定循环体内部代码执行的频率
    clock.tick(60)
    print(i)
pygame.quit()
