from plane_sprites import *
# 游戏初始化
pygame.init()

# 创建屏幕
screen = pygame.display.set_mode((480, 700))

# 背景绘制
background = pygame.image.load("../images/background.png")
screen.blit(background, (0, 0))

# 飞机绘制
plane = pygame.image.load("../images/me1.png")
screen.blit(plane, (180, 250))

# 更新屏幕显示(绘制的图像)
pygame.display.update()

# 创建游戏时钟
clock = pygame.time.Clock()

# 定义Rect记录飞机初始位置——创建一个飞机的矩形区域对象
plane_rect = pygame.Rect(180, 250, 102, 126)

# 创建敌机的精灵对象

# 加载图像
enemy1 = pygame.image.load("../images/enemy1.png")
enemy2 = pygame.image.load("../images/enemy2.png")
enemy3 = pygame.image.load("../images/enemy3_n1.png")
enemy4 = pygame.image.load("../images/enemy3_n2.png")

# 创造精灵
enemy_sprite1 = GameSprite(enemy1, 1)
enemy_sprite2 = GameSprite(enemy2, 2)
enemy_sprite3 = GameSprite(enemy3, 3)
enemy_sprite4 = GameSprite(enemy4, 4)

# 创造精灵组
enemy_group = pygame.sprite.Group(enemy_sprite1, enemy_sprite2, enemy_sprite3, enemy_sprite4)

# 游戏循环
while True:
    # 指定循环体内部代码执行的频率
    clock.tick(120)

    # 监听事件
    event_list = pygame.event.get()
    for event in event_list:

        # 判断事件是否为退出事件
        if event.type == pygame.QUIT:
            print("游戏退出...")

            # 卸载掉所有装载到内存的模块
            pygame.quit()

            # 终止当前执行的程序
            exit()

    # 记录飞机移动后的位置
    plane_rect.y -= 1

    # 如果飞机的位置越界屏幕，则回归到起点位置循环绘制图像
    if plane_rect.y + plane_rect.height <= 0:   # 或者plane.bottom <= 0
        plane_rect.y = 700

    # 重新绘制背景图像，将移动前的飞机的图像覆盖,背景图一定要是第一个重新绘制的图像
    screen.blit(background, (0, 0))

    # 调用blit方法绘制移动后的飞机图像
    screen.blit(plane, plane_rect)

    # 调用精灵组中的方法
    # update将组中所有的精灵对象更新位置
    enemy_group.update()

    # draw将组中所有更新位置后的精灵绘制到屏幕上
    enemy_group.draw(screen)

    # 调用update方法更新屏幕显示
    pygame.display.update()

# 退出游戏
# pygame.quit()
