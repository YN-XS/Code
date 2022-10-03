#include "iostream"
#include "set"
using namespace std;

int main(void)
{
    set<int> set1; // 集合中的元素不重复，且集合中的元素会(从小到大)自动排序

    // 插入
    // set.insert(data)
    set1.insert(2);
    set1.insert(0);
    set1.insert(1);

    // 遍历
    //（迭代器，set.begin()是第一个元素的【地址】,set.end()是末尾元素的下一个元素的【地址】）
    for (auto p = set1.begin(); p != set1.end(); p++)
    {
        cout << *p << " ";
    }
    cout << endl << "set1的长度为:" << set1.size() << endl;

    // 查找
    //（find查找会从集合的set.begin()位置一致查到set.end()位置，返回值是：地址）
    // 查找集合中不存在的元素，则会返回set.end()的地址
    // 查找整个集合直到末尾元素的下一个地址set.end()也没找到则退出
    cout << (set1.find(1) != set1.end()) << endl;
    cout << (set1.find(3) != set1.end()) << endl;
    // cout << *(set1.end()) << endl;

    // 删除
    // set.erase(data)
    set1.erase(1);
    for (auto p = set1.begin(); p != set1.end(); p++)
    {
        cout << *p << " ";
    }
}