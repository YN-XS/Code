# include "iostream"
using namespace std;

struct Node{
    int data;
    // nextָ�� Ҫ����ָ����һ���ڵ�ṹ��ĵ�ַ
    // ���� nextָ�� �����͵��� Node�ṹ������
    Node* next;
};

int main(){
    Node A,B;
    A.data = 10;
    A.next = &B;   //next��ָ�룬��Ҫ������һ���ڵ�ġ���ַ��

    B.data = 20;
    B.next = NULL;  // B����һ����ַΪ���գ�NULL����ȫ������ȷ��B.nextָ��˭

    // A.next��ָ�룬ָ��ڵ�B�ĵ�ַ��ָ�����B������ʹ�ü�ͷ: ָ��->����
    cout << A.data << " -> " << A.next->data << " -> " << B.next << endl;
}