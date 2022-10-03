#include "iostream"
#include "set"
using namespace std;

int main(void)
{
    set<int> set1; // �����е�Ԫ�ز��ظ����Ҽ����е�Ԫ�ػ�(��С����)�Զ�����

    // ����
    // set.insert(data)
    set1.insert(2);
    set1.insert(0);
    set1.insert(1);

    // ����
    //����������set.begin()�ǵ�һ��Ԫ�صġ���ַ��,set.end()��ĩβԪ�ص���һ��Ԫ�صġ���ַ����
    for (auto p = set1.begin(); p != set1.end(); p++)
    {
        cout << *p << " ";
    }
    cout << endl << "set1�ĳ���Ϊ:" << set1.size() << endl;

    // ����
    //��find���һ�Ӽ��ϵ�set.begin()λ��һ�²鵽set.end()λ�ã�����ֵ�ǣ���ַ��
    // ���Ҽ����в����ڵ�Ԫ�أ���᷵��set.end()�ĵ�ַ
    // ������������ֱ��ĩβԪ�ص���һ����ַset.end()Ҳû�ҵ����˳�
    cout << (set1.find(1) != set1.end()) << endl;
    cout << (set1.find(3) != set1.end()) << endl;
    // cout << *(set1.end()) << endl;

    // ɾ��
    // set.erase(data)
    set1.erase(1);
    for (auto p = set1.begin(); p != set1.end(); p++)
    {
        cout << *p << " ";
    }
}