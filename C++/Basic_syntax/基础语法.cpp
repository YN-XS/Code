#include "iostream"
using namespace std; // �����ռ�

int main()
{
    int n;
    const int PI = 3.14; // const ����-���峣�������ƺ궨�壩
    bool flag = -1;      // bool ����-��0���ǣ�true / 1
    string s;
    string &s_name = s; // ���ã���sȡ��һ������,�޸�s_name�����޸�s
    // ���庯��ʱ�Ĳ�����ʹ�ã�int func(int &�ֲ�����)�൱�ڸ��������ȡ�˱���,�����Ϳ���ֱ���ں������޸�ȫ�ֱ�����

    s_name = "jiangzijun";
    
    struct Person
    {
        int id;
        int age;
        string name;
        bool sex;
    }; // struct ����{}, ����==�ýṹ������,��ֱ���ñ����������µĽṹ��
    Person JZJ = {39, 21, "jzj", "1"};
    cout << JZJ.name << endl
         << JZJ.id << endl
         << JZJ.age << endl
         << JZJ.sex << endl;

    string str;
    getline(cin, str); // ��ȡһ���е����루cin�޷����ո����ӵ�����ȫ�����գ�
    cout << str << endl;

    // �ַ������ȣ�str.length()
    int length = s.length();
    // �ַ�����Ƭ��str.substr(��ʼλ��,��Ƭ����),ʡ��������Ĭ������β
    string sub_str = s.substr(5);

    cout << s.length() << endl
         << s.substr(5);
}