import pygame.sprite

from plane_sprites import *


class PlaneGame(object):
    """游戏主体"""
    def __init__(self):
        print("游戏初始化")
        # 创建游戏窗口
        self.screen = pygame.display.set_mode(SCREEN_RECT.size)
        # 创建游戏时钟
        self.clock = pygame.time.Clock()
        # 创建定时器事件
        pygame.time.set_timer(CREATE_ENEMY_EVENT, 1000)
        pygame.time.set_timer(FIRE_FREQUENCY, 500)
        # 调用私有方法，创建精灵和精灵组
        self.__create_sprites()

    def __create_sprites(self):
        # 创建精灵和精灵组
        # 创建精灵
        bg1 = BackGround()
        bg2 = BackGround(is_alt=True)
        # 创建精灵组
        self.bg_group = pygame.sprite.Group(bg1, bg2)
        self.enemy_group = pygame.sprite.Group()
        # 创建飞机的精灵和精灵组
        self.plane = Plane()
        self.plane_group = pygame.sprite.Group(self.plane)

    def start_game(self):
        # 所有创建的精灵组不需要while不断重复创建，只需要创建一次
        self.__create_sprites()
        while True:
            # 1.设置刷新帧率
            self.clock.tick(120)
            # 2.事件监听
            self.__event_handler()
            # 3.碰撞检测
            self.__check_collide()
            # 4.更新并且绘制精灵组
            self.__update_sprites()
            # 5.更新屏幕显示
            pygame.display.update()

    def __event_handler(self):
        for event in pygame.event.get():
            # 判断退出
            if event.type == pygame.QUIT:
                # 使用类名/对象名/self来调用静态方法
                PlaneGame.__game_over()
            elif event.type == CREATE_ENEMY_EVENT:
                enemy = Enemy()
                self.enemy_group.add(enemy)
            # 发射子弹
            elif event.type == FIRE_FREQUENCY:
                self.plane.fire()
            # elif event.type == pygame.KEYDOWN and event.type == pygame.K_RIGHT
            #     print("turn right")
        # 键盘模块获取按键，不是使用事件监听的方法，不放在遍历事件列表中
        keys_pressed = pygame.key.get_pressed()
        if keys_pressed[pygame.K_UP]:
            self.plane.go_speed = -2
        elif keys_pressed[pygame.K_DOWN]:
            self.plane.go_speed = 2
        elif keys_pressed[pygame.K_LEFT]:
            self.plane.turn_speed = -2
        elif keys_pressed[pygame.K_RIGHT]:
            self.plane.turn_speed = 2
        else:
            self.plane.go_speed = 0
            self.plane.turn_speed = 0

    def __check_collide(self):
        # 子弹撞毁敌机
        pygame.sprite.groupcollide(self.enemy_group, self.plane.bullet_group, True, True)
        # 敌机撞毁飞机
        enemies = pygame.sprite.groupcollide(self.plane_group, self.enemy_group, True, True)
        if len(enemies) > 0:
            # 返回值中有值，说明发生碰撞，飞机摧毁，游戏结束
            self.plane.kill()
            PlaneGame.__game_over()

    def __update_sprites(self):
        # 更新精灵组：将组中所有的精灵更新位置并绘制在之前创建的屏幕对象上
        self.bg_group.update()
        self.bg_group.draw(self.screen)
        self.enemy_group.update()
        self.enemy_group.draw(self.screen)
        self.plane_group.update()
        self.plane_group.draw(self.screen)
        self.plane.bullet_group.update()
        self.plane.bullet_group.draw(self.screen)

    @staticmethod
    def __game_over():
        print("游戏结束")
        pygame.quit()
        exit()


if __name__ == '__main__':
    # 创建游戏对象
    game = PlaneGame()
    # 启动游戏
    game.start_game()
