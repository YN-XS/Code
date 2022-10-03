# include "iostream"
using namespace std;

struct Node{
    int data;
    // next指针 要用于指向下一个节点结构体的地址
    // 所以 next指针 的类型得是 Node结构体类型
    Node* next;
};

int main(){
    Node A,B;
    A.data = 10;
    A.next = &B;   //next是指针，需要接收下一个节点的【地址】

    B.data = 20;
    B.next = NULL;  // B的下一个地址为（空）NULL更安全，否则不确定B.next指向谁

    // A.next是指针，指向节点B的地址，指针访问B中属性使用箭头: 指针->属性
    cout << A.data << " -> " << A.next->data << " -> " << B.next << endl;
}