#include "iostream"
#include "vector"
using namespace std;

int main(void)
{
    vector<int> arr;         // 数组未初始化
    vector<int> arr1(10);    // 数组初始化分配了10个空间，未给定元素(默认为0)
    vector<int> arr2(10, 2); // 数组初始化分配了10个空间，每个元素都为2
    cout << "数组的初始长度为：" << arr.size() << endl;
    arr.resize(10);
    cout << "分配数组大小后的长度为：" << arr.size() << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = i * 2;
    }
    arr.push_back(10); // 在数组末尾插入一个元素,push_back不能在for循环中使用

    cout << "arr: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // 迭代器：p是一个指针，自动遍历数组，直至数组【末尾元素的下一个元素的地址】
    // arr.begin()和arr.end()都是一个【地址】，而不是元素本身
    // 数组arr.end()是数组中【末尾元素的下一个元素的地址】

    cout << "arr1: ";
    for (auto p = arr1.begin(); p != arr1.end(); p++)
    {
        cout << *p << " ";
    }
    cout << endl;

    arr.pop_back();   // 删除数组末尾的一个元素
    
    cout << "arr删除末尾元素后: ";
    for (auto p = arr.begin(); p != arr.end(); p++)
    {
        cout << *p << " ";
    }

    cout << endl << "arr.begin()首地址取值就是[数组首元素]: " << *arr.begin();
    cout << endl << "arr.end()尾地址取值: " << *arr.end();
    cout << endl << "arr尾地址前一个元素才是[数组末尾元素]: " << *(arr.end()-1);

    arr.clear();

    cout << endl << "clear数组之后arr长度:" << arr.size() << endl << "arr: ";
    for(auto temp:arr){
        cout << temp << " ";
    }

    return 0;
}