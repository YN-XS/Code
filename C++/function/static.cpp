# include "iostream"
using namespace std;

int func1(void){
    // 函数中定义的变量，当函数调用完之后自动销毁
    // 这个变量的生命周期仅仅在函数调用的时候
    // 下一次调用会重新在函数中定义该变量
    int a = 0;
    a++;
    return a;
}

int func2(void){
    // 使用 static 让函数中定义的变量变成静态的
    // 延长了函数中变量的生命周期至程序结束
    // 下一次调用函数时，该变量仍然存在，不会再重新定义该变量
    static int a = 0;
    a++;
    return a;
}

int main(void){
    cout << func1() << " " << func1() << endl;
    cout << func2() << " " << func2() << endl;

}