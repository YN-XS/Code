# include "iostream"
using namespace std;

// ������һ��Person��������
class Person{

// �������˽�����Ժͷ���
// ˽�����Ժ�˽�з���ֻ�ܱ����ж���ķ��������ã����ܱ�ʵ������������
private:
    string small_name = "��";

// ������Ĺ������Ժͷ���
// �������Ժͷ������Ա�ʵ���������ɵ���
public:
    string name = "���ӿ�";
    void eat(){
        cout << "Eat some delicious food" << endl;
    }
};

int main(void){
    // ʹ�� class* ���͵ġ�ָ������� ���ն��󡾹ؼ���new�������Ķ��� new class()
    Person* JZJ = new Person();
    // ��ָ���������ַ��ȡֵ��õ�������ʵ�����������
    Person jzj = *JZJ;
    // �������ݵ����Ժͷ���ʹ��.���Ժ�.����()
    cout << jzj.name << endl;

    // ָ��������յĶ���ʹ��ָ��������ݵ����Ժͷ�����Ҫ�ü�ͷ: ->
    cout << JZJ -> name << endl;
    JZJ -> eat();
}