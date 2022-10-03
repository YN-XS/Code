# include "iostream"
using namespace std;

// 定义了一个Person的新类型
class Person{

// 定义类的私有属性和方法
// 私有属性和私有方法只能被类中定义的方法所调用，不能被实例对象所调用
private:
    string small_name = "俊";

// 定义类的共有属性和方法
// 共有属性和方法可以被实例对象自由调用
public:
    string name = "姜子俊";
    void eat(){
        cout << "Eat some delicious food" << endl;
    }
};

int main(void){
    // 使用 class* 类型的【指针变量】 接收对象【关键字new】创建的对象 new class()
    Person* JZJ = new Person();
    // 对指针变量（地址）取值则得到真正的实例对象的数据
    Person jzj = *JZJ;
    // 访问数据的属性和方法使用.属性和.方法()
    cout << jzj.name << endl;

    // 指针变量接收的对象，使用指针访问数据的属性和方法需要用箭头: ->
    cout << JZJ -> name << endl;
    JZJ -> eat();
}