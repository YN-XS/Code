#include "iostream"
#include "stack"
using namespace std;

int main(void)
{
    // ����ջ
    // ջ���Ƚ������ֻ�ܷ���ջ��Ԫ��
    stack<int> stack1;

    // ѹջ
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);

    //����ջ��Ԫ��
    cout << "ջ��Ԫ��Ϊ��" << stack1.top() << endl;

    // ��ջ
    stack1.pop();

    cout << "ջ��Ԫ��Ϊ��" << stack1.top() << endl;

    // ջ�ĳ���
    cout << "ջ�ĳ���Ϊ��" << stack1.size() << endl;

    // ջ�Ƿ�Ϊ��
    cout << "ջ�Ƿ�Ϊ��: " << stack1.empty() << endl;
}
