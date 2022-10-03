class HouseItem:
    def __init__(self, name, area):
        self.name = name
        self.area = area

    def __str__(self):
        return "[%s]占用空间为%.2f平方米" % (self.name, self.area)


class House:
    def __init__(self, house_type, area):
        self.house_type = house_type
        self.area = area
        # 初始面积就等于总面积，不需要参数传递
        self.free_area = area
        # 初始家具列表就是空列表，也不需要参数传递
        self.item_list = []

    def __str__(self):
        return ("户型：%s\n总面积：%.2f\n剩余面积：%.2f\n家具：%s"
                % (self.house_type, self.area, self.free_area, self.item_list))

    def add_item(self, item):
        if item.area > self.free_area:
            print("%s的占用面积:%.2f超出了房子的剩余面积:%.2f，无法添加!"
                  % (item.name, item.area, self.free_area))
        elif item.area <= self.free_area:
            self.item_list.append(item.name)
            self.free_area -= item.area
            print("添加了占用面积为%.2f的[%s]" % (item.area, item.name))


bed = HouseItem("席梦思", 40)
chest = HouseItem("衣柜", 15)
table = HouseItem("餐桌", 100)
print(bed, chest, table, sep="\n")
my_house = House("两室一厅", 100)
print(my_house)
my_house.add_item(bed)
my_house.add_item(chest)
my_house.add_item(table)
print(my_house)
