# include "iostream"
using namespace std;

int gcd(int x,int y){
    int temp = y;
    while(x%y!=0){  // �ٶ�x>y����>x%y����y%x
        temp = x%y;
        x = y;      // ����С����y�����ϴ����x
        y = temp;   // ��x%y������������С����y
    }
    return temp;
};

int main(void){
    int x,y;
    x = 36;
    y = 32;
    int result = gcd(x,y);
    cout << "���Լ��: " << result;
    cout << "��С������: " << x*y/result;
}