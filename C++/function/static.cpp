# include "iostream"
using namespace std;

int func1(void){
    // �����ж���ı�����������������֮���Զ�����
    // ����������������ڽ����ں������õ�ʱ��
    // ��һ�ε��û������ں����ж���ñ���
    int a = 0;
    a++;
    return a;
}

int func2(void){
    // ʹ�� static �ú����ж���ı�����ɾ�̬��
    // �ӳ��˺����б����������������������
    // ��һ�ε��ú���ʱ���ñ�����Ȼ���ڣ����������¶���ñ���
    static int a = 0;
    a++;
    return a;
}

int main(void){
    cout << func1() << " " << func1() << endl;
    cout << func2() << " " << func2() << endl;

}