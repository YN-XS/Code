# include "iostream"
using namespace std;

int fun(int a,int b=0){
    // Ĭ�ϲ���(��ѡ����)�������λ�ò����ĺ���
    return a + b;
}

int main(void){
    cout << fun(2);
}