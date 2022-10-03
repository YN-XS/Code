# include "iostream"
using namespace std;

int fun(int a,int b=0){
    // 默认参数(可选参数)必须放在位置参数的后面
    return a + b;
}

int main(void){
    cout << fun(2);
}