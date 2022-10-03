#include<stdio.h>
#include<stdlib.h>
#define SIZE 6
struct duilie{
    int* pdata;
    int front;
    int rear;
    int length;
};
bool init(duilie* Q);
bool join(duilie* Q,int val);
void traver(duilie Q);
bool delet(duilie* Q,int* val);
bool clear(duilie* Q);
bool destroy(duilie* Q);
int main(){
    duilie Q;
    if(init(&Q))
        printf("初始化成功！\n");
    int num;
    do {
        printf("请输入元素个数（最多%d个）：",SIZE-1);
        scanf("%d", &num);
    }while(num>SIZE-1);
    int val1;
    for(int i=1;i<=num;i++) {
        printf("请输入第%d元素：",i);
        scanf("%d",&val1);
        join(&Q, val1);
    }
    traver(Q);
    int num1,num2,val2,val3;
    printf("请输入需要删除元素的个数:\n");
    scanf("%d",&num1);
    for(int i=1;i<=num1;i++) {
        delet(&Q, &val2);
        printf("删除的第%d个元素是%d\n",i,val2);
    }
    traver(Q);
    do {
        printf("请输入需要增加的元素个数（最多加%d个）\n", SIZE-1-Q.length);
        scanf("%d", &num2);
    }while(num2>SIZE-1-Q.length);
    for(int i=1;i<=num2;i++){
        printf("请输入加入的第%d个元素：",i);
        scanf("%d",&val3);
        join(&Q,val3);
    }
    traver(Q);
    printf("将队列清空后\n");
    if(clear(&Q))
        traver(Q);
    if(destroy(&Q))
        traver(Q);
}
bool init(duilie* Q){
    Q->pdata = (int*) malloc(sizeof(int)*SIZE);
    if(!Q->pdata)
        return false;
    Q->front = Q->rear = 0;
    Q->length = 0;
    return true;
}
bool join(duilie* Q,int val){
    if(Q->rear+1%SIZE==Q->front)
        return false;
    Q->pdata[Q->rear] = val;
    Q->rear = (Q->rear+1)%SIZE;
    Q->length++;
    return true;
}
void traver(duilie Q){
    if(Q.front==Q.rear)
        printf("队列中已经不存在元素\n");
    else{
        printf("从队首开始遍历：\n");
    int p = Q.front;
    for(int i=1;i<Q.length;i++){
        printf("%d——", Q.pdata[p]);
        p=(p+1)%SIZE;
    }
    printf("%d\n",Q.pdata[p]);}
}
bool delet(duilie* Q,int* val){
    if(Q->front==Q->rear)
        return false;
    *val = Q->pdata[Q->front];
    Q->front = (Q->front+1)%SIZE;
    Q->length--;
    return true;
}
bool clear(duilie* Q){
    for(int i=1;i<=Q->length;i++){
        Q->pdata[Q->front] = NULL;
        Q->front=(Q->front+1)%SIZE;
    }
}
bool destroy(duilie* Q){
    for(int i =1;i<=Q->length;i++)
        free(Q);
    return true;
}
