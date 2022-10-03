#include "iostream"
using namespace std; // 命名空间

int main()
{
    int n;
    const int PI = 3.14; // const 类型-定义常量（类似宏定义）
    bool flag = -1;      // bool 类型-非0即是：true / 1
    string s;
    string &s_name = s; // 引用：给s取了一个别名,修改s_name就是修改s
    // 定义函数时的参数中使用：int func(int &局部变量)相当于给传入参数取了别名,这样就可以直接在函数中修改全局变量）

    s_name = "jiangzijun";
    
    struct Person
    {
        int id;
        int age;
        string name;
        bool sex;
    }; // struct 别名{}, 别名==该结构体类型,可直接用别名来创建新的结构体
    Person JZJ = {39, 21, "jzj", "1"};
    cout << JZJ.name << endl
         << JZJ.id << endl
         << JZJ.age << endl
         << JZJ.sex << endl;

    string str;
    getline(cin, str); // 获取一整行的输入（cin无法将空格连接的输入全部接收）
    cout << str << endl;

    // 字符串长度：str.length()
    int length = s.length();
    // 字符串切片：str.substr(起始位置,切片数量),省略数量则默认至结尾
    string sub_str = s.substr(5);

    cout << s.length() << endl
         << s.substr(5);
}