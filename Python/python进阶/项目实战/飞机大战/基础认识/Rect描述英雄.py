import pygame
# 创建英雄的矩形区域对象（x,y.width,height）
hero_rect = pygame.Rect(100, 500, 120, 125)
print("英雄的坐标原点（%d，%d）" % (hero_rect.x, hero_rect.y))
print("英雄的尺寸（宽度：%d，高度：%d）" % (hero_rect.width, hero_rect.height))
print("英雄的尺寸（宽度：%d，高度：%d）" % hero_rect.size)
