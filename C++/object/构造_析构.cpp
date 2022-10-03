# include "iostream"
using namespace std;

class Person{
private:
    string small_name = "人";
public:
    string name = "人类";
    int age = 0;

    // 构造函数是最先被自动调用的，它的调用过程不可见
    // 可以自己给构造函数添加一些需要的代码
    Person(){
        cout << "无参构造函数" << endl;
    }

    // 析构函数在实例对象被delete时会自动调用
    ~Person(){
        cout << "析构函数" << endl;
    }

    // 有参构造函数用于初始化对象
    Person(string name, int age): name(name),age(age){
        cout << "有参构造函数" << endl;
    }

    // 对象都是用其所属类型的指针变量来接收的
    // this表示当前实例对象(指针变量)
    // 使用【this->属性】和【this->方法】可以在类的内部访问和调用该对象的方法
    void create_name(string NAME){
        this->small_name = NAME;
    }
    void show_info(){
        cout << this->name << " " << this->small_name << " ";
        cout << this->age << endl;
    }
};

int main(void){
    // 没有传入初始化信息
    Person* JZJ = new Person();
    JZJ->create_name("心释");
    JZJ->show_info();
    delete JZJ;

    // 传入了初始化信息
    Person* YS = new Person("杨树",21);
    YS->show_info();
    delete YS;
    }