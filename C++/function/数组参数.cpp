# include "iostream"
using namespace std;

void fun1(int arr[], int len);
// ������Ϊ�����������ó��ȿ��Զ�ƥ���С,�ȼ���ʹ��int* ���͵�������������
void fun2(int arr[100], int len);
// ������Ϊ���������ó��ȣ����β��е����鳤�ȱ������õĴ���ʵ��������ĳ���

int main(void){
    int arr[6] = {0,1,2,3,4,5};
    int arr2[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13};
    fun1(arr, 6);
    fun2(arr2,10);
    
    for(int p:arr2){
        cout << p << " ";
    }
    
    return 0;
}


void fun1(int arr[], int len){
    for(int i=0;i<len;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void fun2(int arr[100], int len){
    for(int i=0;i<len;i++){
        arr[i] += 10;
        cout << arr[i] << " ";
    }
    cout << endl;
}