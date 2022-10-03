# include "iostream"
# include "string"
using namespace std;

int main(void){
    // 将其他格式转换为字符串格式
    string s = to_string(3.14);
    cout << s << endl;
    // 使用printf打印转换过来的字符串需要使用str.c_str()方法
    printf("%s\n", s.c_str());


    // 将字符串格式转换为其他格式
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