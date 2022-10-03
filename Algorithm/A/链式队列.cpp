#include<stdio.h>
#include<stdlib.h>
typedef struct QNode
{
    int data;
    QNode *next;
}QNode;
typedef struct
{
    QNode* front;	//ͷָ��
    QNode* rear;	//βָ��
}LinkQueue;	//���е���ʽ�洢��ʾ
//ʵ�ִ�ͷ������ʽ����

bool init(LinkQueue* Q);
bool EnQueue(LinkQueue* Q,int e);
void traver(LinkQueue Q);
bool DeQueue(LinkQueue* Q,int* e);
bool GetHead(LinkQueue Q,int* e);
// void clear(LinkQueue* Q);
//void destroy(LinkQueue* Q);
int main(){
    printf("2000100739 ���ӿ�");
    LinkQueue Q;
    int num,val;
    if(init(&Q))
        printf("��ʼ���ɹ���\n\n");
    printf("������Ԫ�ظ�����");
    scanf("%d",&num);
    for(int i = 1;i<=num;i++)
    {
        printf("�������%d�����ݣ�",i);
        scanf("%d",&val);
        EnQueue(&Q,val);
    }
    traver(Q);
    int e1;
    if(GetHead(Q,&e1))
        printf("����Ԫ��Ϊ%d\n\n",e1);
    int e;
    if(DeQueue(&Q,&e))
        printf("�����е�Ԫ��Ϊ��%d\n\n",e);
    traver(Q);
    int e2;
    if(GetHead(Q,&e2))
        printf("����Ԫ��Ϊ%d\n\n",e2);

}

bool init(LinkQueue* Q)
{
    Q->front = Q->rear =(QNode*)malloc(sizeof(QNode));
    if(!Q->front)
        return false;
    Q->front->next=NULL;
    return true;
}

bool EnQueue(LinkQueue* Q,int e)
{
    QNode* pnew = (QNode*)malloc(sizeof(QNode));
    if (!pnew)
        return false;
    pnew->data = e;
    pnew->next=NULL;
    Q->rear->next = pnew;
    Q->rear = pnew;
    return true;
}

void traver(LinkQueue Q){
    QNode* p = Q.front->next;
    printf("�Ӷ�ͷ��ʼ������");
    while(p){
        printf("%5d",p->data);
        p=p->next;
    }
    printf("\n\n");
}

bool DeQueue(LinkQueue* Q,int* e){  //������ɾ����һ�����ݽڵ�
    if(Q->front==Q->rear)
        return false;
    QNode* p = Q->front->next;
    *e = p->data;
    Q->front->next=p->next;
    if (p==Q->rear)
        Q->rear = Q->front;
    free(p);
    return true;
}

bool GetHead(LinkQueue Q,int* e)
{
    *e = Q.front->next->data;
    return true;
}
