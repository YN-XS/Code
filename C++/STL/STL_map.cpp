#include "iostream"
#include "map"
using namespace std;

int main(void)
{   // 自带排序的map：底层是【二叉树】
    // 无序的unordered_map：底层是【哈希表】

    // 创建map键值对<键的类型,值的类型>
    // map中的键值对会按照依次根据【键】和【值】的ASCII码进行排序
    map<string, int> map1;

    // 添加键值对
    map1["学号"] = 39;
    map1["年龄"] = 21;
    map1["性别"] = 1;
    // 插入键值对 make_pair(键,值)
    map1.insert(make_pair("生日",1118));

    // 访问
    // 存在则返回值，【不存在则立即创建值为：0的该键值对】
    cout << "学号：" << map1["学号"] << endl;
    cout << "姓名：" << map1["姓名"] << endl;

    // 遍历
    // (迭代器遍历：从第一个键值对遍历到最后一个键值对的下一个地址)
    // map键值对相当于一个包含了【键】和【值】两个成员的结构体
    // 键值对的第一个元素是键：p->first
    // 键值对的第二个元素是值：p->second
    for (auto p = map1.begin(); p != map1.end(); p++)
    {
        cout << p->first << ":" << p->second << " ";
    }
    cout << endl
         << "map1的长度为: " << map1.size() << endl;

    // 判断key是否存在
    // 键也是不能重复的，所以要么0个要么1个
    cout << "是否有key-学号: " << map1.count("学号") << endl;

    // 清空
    map1.clear();
    cout << "清空后map1长度: " << map1.size() <<endl;
    cout << "清空后map1是否为空: " << map1.empty();
}