#include "iostream"
#include "queue"
using namespace std;

int main(void)
{
    // 创建队列
    // 队列：队尾入队，队首出队，只能访问队首front和队尾back
    queue<int> queue1;

    // 入队
    // 从队尾入队
    for (int i = 0; i < 10; i++)
    {
        queue1.push(i);
    }
    cout << "队列的长度为：" << queue1.size() << endl;

    // 访问
    cout << "队首元素为：" << queue1.front() << endl;
    cout << "队尾元素为：" << queue1.back() << endl;

    // 出队
    // 从队首出队
    queue1.pop();
    cout << "出队后，队首元素为：" << queue1.front() << endl;

    // 队列长度
    cout << "队列的长度为：" << queue1.size() << endl;
}