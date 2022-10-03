#include "iostream"
#include "map"
using namespace std;

int main(void)
{   // �Դ������map���ײ��ǡ���������
    // �����unordered_map���ײ��ǡ���ϣ��

    // ����map��ֵ��<��������,ֵ������>
    // map�еļ�ֵ�Իᰴ�����θ��ݡ������͡�ֵ����ASCII���������
    map<string, int> map1;

    // ��Ӽ�ֵ��
    map1["ѧ��"] = 39;
    map1["����"] = 21;
    map1["�Ա�"] = 1;
    // �����ֵ�� make_pair(��,ֵ)
    map1.insert(make_pair("����",1118));

    // ����
    // �����򷵻�ֵ��������������������ֵΪ��0�ĸü�ֵ�ԡ�
    cout << "ѧ�ţ�" << map1["ѧ��"] << endl;
    cout << "������" << map1["����"] << endl;

    // ����
    // (�������������ӵ�һ����ֵ�Ա��������һ����ֵ�Ե���һ����ַ)
    // map��ֵ���൱��һ�������ˡ������͡�ֵ��������Ա�Ľṹ��
    // ��ֵ�Եĵ�һ��Ԫ���Ǽ���p->first
    // ��ֵ�Եĵڶ���Ԫ����ֵ��p->second
    for (auto p = map1.begin(); p != map1.end(); p++)
    {
        cout << p->first << ":" << p->second << " ";
    }
    cout << endl
         << "map1�ĳ���Ϊ: " << map1.size() << endl;

    // �ж�key�Ƿ����
    // ��Ҳ�ǲ����ظ��ģ�����Ҫô0��Ҫô1��
    cout << "�Ƿ���key-ѧ��: " << map1.count("ѧ��") << endl;

    // ���
    map1.clear();
    cout << "��պ�map1����: " << map1.size() <<endl;
    cout << "��պ�map1�Ƿ�Ϊ��: " << map1.empty();
}