# include "iostream"
# include "cctype"
using namespace std;

int main(void){
    char alpha = 'A';

    //判断函数
    // 返回值全为bool值 0/1
    cout << alpha << " is alpha? " << isalpha(alpha) << endl;
    cout << alpha << " is alpha or number? " << isalnum(alpha) << endl;

    // 判断是否为空白字符
    // " "、\n、\r、\t 等空白字符
    cout << alpha << " is space? " << isspace(alpha) << endl;

    // 判断大小写
    cout << alpha << " is upper? " << isupper(alpha) << endl;
    cout << alpha << " is lower? " << islower(alpha) << endl;

    // 转换函数
    // tolower(char) 和 toupper(char) 返回的是转换后的【ASCII码】
    // 需要将【ASCII】码以【char】字符类型打印才能是字母
    cout << alpha << " 转换为小写字母：" << tolower(alpha) << '-' << char(alpha) << endl;
    cout << alpha << " 转换为大写字母：" << toupper(alpha) << '-' << char(alpha) << endl;

    return 0;
}