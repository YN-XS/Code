# include "iostream"
# include "string"
using namespace std;

int main(void){
    int arr[] = {1,2,3,4,5,6,7,8};
    char str[] = "hello world";
    string s;
    s = "jiang zi jun";

    // ��ǿ��forѭ��������һ������
    // auto ����������Զ�ƥ��������ֵ������
    // �����е��β�ֻ�ܽ���ʵ�ε�ֵ��������ʵ�α���ֵ���Σ�
    // ʹ�����ŷ���& �൱�ڸ������ʵ��ȡһ������������������޸�ʵ�α���
    for(auto i:arr){
        cout << i << " ";
    }
    cout << endl;
    for(auto i:str){
        cout << i << " ";
    }
    cout << endl;

    for(auto &i:str){
        cout << ++i <<" ";
    }

}