# include "iostream"
# include "string"
using namespace std;

int main(void){
    // ��������ʽת��Ϊ�ַ�����ʽ
    string s = to_string(3.14);
    cout << s << endl;
    // ʹ��printf��ӡת���������ַ�����Ҫʹ��str.c_str()����
    printf("%s\n", s.c_str());


    // ���ַ�����ʽת��Ϊ������ʽ
    int a = stoi("110");
    float b = stof("11.2");
    double c = stod("3.1415926");
    long long d = stoll("3.1415926");
    unsigned long e = stoul("3.1415926");

    cout << a - 100 << endl;
    cout << b - 100 << endl;
    cout << d - 100 << endl;
    return 0;
}