# include "iostream"
# include "vector"
using namespace std;

int main(void){
    // auto 根据初始化的值自动匹配变量的数据类型
    // 使用auto声明变量时必须做初始化
    auto num = 100;
    auto name = "姜子俊";
    auto high = 173.5;
    auto a = 0;

    cin >> a;
    cout << "a的值为: " << a << endl;
    cout << "num: " << num << endl << "name " << name << endl << "high " << high << endl;

    return 0;
}