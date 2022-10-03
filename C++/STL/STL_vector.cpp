#include "iostream"
#include "vector"
using namespace std;

int main(void)
{
    vector<int> arr;         // ����δ��ʼ��
    vector<int> arr1(10);    // �����ʼ��������10���ռ䣬δ����Ԫ��(Ĭ��Ϊ0)
    vector<int> arr2(10, 2); // �����ʼ��������10���ռ䣬ÿ��Ԫ�ض�Ϊ2
    cout << "����ĳ�ʼ����Ϊ��" << arr.size() << endl;
    arr.resize(10);
    cout << "���������С��ĳ���Ϊ��" << arr.size() << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = i * 2;
    }
    arr.push_back(10); // ������ĩβ����һ��Ԫ��,push_back������forѭ����ʹ��

    cout << "arr: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // ��������p��һ��ָ�룬�Զ��������飬ֱ�����顾ĩβԪ�ص���һ��Ԫ�صĵ�ַ��
    // arr.begin()��arr.end()����һ������ַ����������Ԫ�ر���
    // ����arr.end()�������С�ĩβԪ�ص���һ��Ԫ�صĵ�ַ��

    cout << "arr1: ";
    for (auto p = arr1.begin(); p != arr1.end(); p++)
    {
        cout << *p << " ";
    }
    cout << endl;

    arr.pop_back();   // ɾ������ĩβ��һ��Ԫ��
    
    cout << "arrɾ��ĩβԪ�غ�: ";
    for (auto p = arr.begin(); p != arr.end(); p++)
    {
        cout << *p << " ";
    }

    cout << endl << "arr.begin()�׵�ַȡֵ����[������Ԫ��]: " << *arr.begin();
    cout << endl << "arr.end()β��ַȡֵ: " << *arr.end();
    cout << endl << "arrβ��ַǰһ��Ԫ�ز���[����ĩβԪ��]: " << *(arr.end()-1);

    arr.clear();

    cout << endl << "clear����֮��arr����:" << arr.size() << endl << "arr: ";
    for(auto temp:arr){
        cout << temp << " ";
    }

    return 0;
}