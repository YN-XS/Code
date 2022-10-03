#include "iostream"
#include "stack"
using namespace std;

int main(void)
{
    // 创建栈
    // 栈：先进后出，只能访问栈顶元素
    stack<int> stack1;

    // 压栈
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);

    //访问栈顶元素
    cout << "栈顶元素为：" << stack1.top() << endl;

    // 出栈
    stack1.pop();

    cout << "栈顶元素为：" << stack1.top() << endl;

    // 栈的长度
    cout << "栈的长度为：" << stack1.size() << endl;

    // 栈是否为空
    cout << "栈是否为空: " << stack1.empty() << endl;
}
