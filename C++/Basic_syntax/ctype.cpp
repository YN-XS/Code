# include "iostream"
# include "cctype"
using namespace std;

int main(void){
    char alpha = 'A';

    //�жϺ���
    // ����ֵȫΪboolֵ 0/1
    cout << alpha << " is alpha? " << isalpha(alpha) << endl;
    cout << alpha << " is alpha or number? " << isalnum(alpha) << endl;

    // �ж��Ƿ�Ϊ�հ��ַ�
    // " "��\n��\r��\t �ȿհ��ַ�
    cout << alpha << " is space? " << isspace(alpha) << endl;

    // �жϴ�Сд
    cout << alpha << " is upper? " << isupper(alpha) << endl;
    cout << alpha << " is lower? " << islower(alpha) << endl;

    // ת������
    // tolower(char) �� toupper(char) ���ص���ת����ġ�ASCII�롿
    // ��Ҫ����ASCII�����ԡ�char���ַ����ʹ�ӡ��������ĸ
    cout << alpha << " ת��ΪСд��ĸ��" << tolower(alpha) << '-' << char(alpha) << endl;
    cout << alpha << " ת��Ϊ��д��ĸ��" << toupper(alpha) << '-' << char(alpha) << endl;

    return 0;
}