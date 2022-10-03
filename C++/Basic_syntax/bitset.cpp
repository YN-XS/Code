# include "iostream"
# include "bitset"
using namespace std;

int main(void){
    // bitset 类似于一个字符数组，将二进制的每一位字符【由低位到高位保存】
    // 所以该字符数组[0]是最低位，正常读二进制时：是由高位到低位的排列-arr[size]:arr[0]

    // 初始化
    bitset<5> a;    // 定义了五位二进制的数组,初始化为0（给定十进制数）
    bitset<5> b(20); // 定义了五位二进制的数组,初始化为20（给定十进制数）
    bitset<5> c("1001"); // 定义了五位二进制的数组,给定了二进制位的字符（不够0补）
    string s = "11010101";
    bitset<5> (s,6,5);  // 读取二进制字符串的第六位开始后的五位二进制位

    cout << "a:" << a << endl << "b:" << b << endl << "c:" << c << endl;

    // 处理
    cout << b << "是否存在1: " << b.any() << endl << b <<"是否全为0: " << b.none() << endl;

    cout << b << "中1的个数" << b.count() << endl << b << "中元素的个数" << b.size() << endl;

    b.test(0);  // 判断二进制第0位（最低位）是否为1
    b.set();   // 所有位置1
    b.set(0);   // 将二进制第0位（最低位）设置为1
    cout << b << endl;

    b.flip();   // 所有位取反
    cout << b << endl;
    b.flip(0);  // 第0位（最低位）取反
    cout << b << endl;

    b.reset(); // 所有位归零
    b.reset(0); // 第0位（最低位）归零

    unsigned long num = c.to_ullong();  // 将二进制数转换为 unsigned long 类型 (二进制——>十进制)
    cout << c << ":" << num;

    return 0;
}