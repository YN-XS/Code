# include "iostream"
using namespace std;

class Person{
private:
    string small_name = "��";
public:
    string name = "����";
    int age = 0;

    // ���캯�������ȱ��Զ����õģ����ĵ��ù��̲��ɼ�
    // �����Լ������캯�����һЩ��Ҫ�Ĵ���
    Person(){
        cout << "�޲ι��캯��" << endl;
    }

    // ����������ʵ������deleteʱ���Զ�����
    ~Person(){
        cout << "��������" << endl;
    }

    // �вι��캯�����ڳ�ʼ������
    Person(string name, int age): name(name),age(age){
        cout << "�вι��캯��" << endl;
    }

    // �����������������͵�ָ����������յ�
    // this��ʾ��ǰʵ������(ָ�����)
    // ʹ�á�this->���ԡ��͡�this->����������������ڲ����ʺ͵��øö���ķ���
    void create_name(string NAME){
        this->small_name = NAME;
    }
    void show_info(){
        cout << this->name << " " << this->small_name << " ";
        cout << this->age << endl;
    }
};

int main(void){
    // û�д����ʼ����Ϣ
    Person* JZJ = new Person();
    JZJ->create_name("����");
    JZJ->show_info();
    delete JZJ;

    // �����˳�ʼ����Ϣ
    Person* YS = new Person("����",21);
    YS->show_info();
    delete YS;
    }