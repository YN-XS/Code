# include "iostream"
# include "string"
using namespace std;

int main(void){
    int arr[] = {1,2,3,4,5,6,7,8};
    char str[] = "hello world";
    string s;
    s = "jiang zi jun";

    // 增强型for循环类似于一个函数
    // auto 类型则可以自动匹配序列中值的类型
    // 函数中的形参只能接收实参的值，而不是实参本身（值传参）
    // 使用引号符号& 相当于给传入的实参取一个别名，这样便可以修改实参本身
    for(auto i:arr){
        cout << i << " ";
    }
    cout << endl;
    for(auto i:str){
        cout << i << " ";
    }
    cout << endl;

    for(auto &i:str){
        cout << ++i <<" ";
    }

}