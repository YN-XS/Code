#include "iostream"
#include "queue"
using namespace std;

int main(void)
{
    // ��������
    // ���У���β��ӣ����׳��ӣ�ֻ�ܷ��ʶ���front�Ͷ�βback
    queue<int> queue1;

    // ���
    // �Ӷ�β���
    for (int i = 0; i < 10; i++)
    {
        queue1.push(i);
    }
    cout << "���еĳ���Ϊ��" << queue1.size() << endl;

    // ����
    cout << "����Ԫ��Ϊ��" << queue1.front() << endl;
    cout << "��βԪ��Ϊ��" << queue1.back() << endl;

    // ����
    // �Ӷ��׳���
    queue1.pop();
    cout << "���Ӻ󣬶���Ԫ��Ϊ��" << queue1.front() << endl;

    // ���г���
    cout << "���еĳ���Ϊ��" << queue1.size() << endl;
}