#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    node* pNext;
}Node, *PNode;

 //实现带头结点的单链表的各项操作

Node* createList();   //创建，返回创建好的单链表的头指针
int length(PNode pHead);//求表长
void traverse(PNode pHead); //遍历
bool insertList(PNode pHead, int pos, int val);//第pos个数据位置插入val
bool deleteElem(PNode pHead, int pos); //删除第pos个结点


int main(void)
{
   //test
    Node* pHead = createList();
    traverse(pHead);
    printf("链表长度为：%d \n",length(pHead));

    system("pause");
    printf("请输入要插入的位置：");
	int pos, val;
	scanf("%d",&pos);
	printf("请输入要插入的整数：");
	scanf("%d",&val);
    if(insertList(pHead,pos,val)){
	   printf("插入成功!\n");
	   traverse(pHead);
    }
    else {
	   printf("插入失败!\n");
    }

    system("pause");
	printf("请输入要删除第几个数：");
	scanf("%d",&pos);
    if(deleteElem(pHead,pos)) {
	   printf("删除成功!\n");
	   traverse(pHead);
    }
    else {
	   printf("删除失败!\n");
    }
    system("pause");
    return 0;
}

PNode createList()
{
    int len, value;
    PNode pHead = (PNode)(malloc(sizeof(Node)));
    PNode p = pHead;
    p->pNext = NULL;

    printf("请输入你要的节点个数：");
    scanf("%d", &len);
    for(int i=1;i<=len;i++){
        printf("请输入第%d个节点的值：", i);
        scanf("%d", &value);

        PNode pNew = (PNode)malloc(sizeof(Node));
        pNew->data = value;
		pNew->pNext = NULL;
        p->pNext = pNew;
		p = pNew;
    }
    return pHead;
}

int length(PNode pHead)
{
    int len = 0;
	node* pTemp = pHead;
    while(pTemp->pNext!=NULL){
        pTemp = pTemp->pNext;
        len++;
    }
    return len;

}

void traverse(PNode pHead)
{
    printf("遍历结果为: 头结点-> ");
	if(length(pHead) == 0)
		return;
    PNode p = pHead->pNext;
    while(p->pNext != NULL)
    {
		printf("%d -> ", p->data);
        p = p->pNext;
    }
	printf("%d ", p->data);
    printf("\n");
}

bool insertList(PNode pHead, int pos, int val)
{
	///////////////////////////////////////////
	if(pos<1||pos>length(pHead)+1)
	return false;
	node *p=pHead;
	for(int j=1;j<=pos-1;j++)
	p=p->pNext;
	node*pNew=(node*)malloc(sizeof(node));//生成node*型的结点并将该结点起始位置赋给指针pNew
	pNew->data=val;
	pNew->pNext=p->pNext;//先
	p->pNext=pNew; //后
    return true;
}


//bool deleteElem(PNode pHead, int pos,int& e)  原来的
bool deleteElem(PNode pHead, int pos)
{
	////////////////////////////////////////
    if(pos<1||pos>length(pHead)+1)
    return false;
    node *p=pHead;
	for(int j=0;j<pos-1;j++)
	p=p->pNext;
	p->pNext =p->pNext ->pNext;
    return true;

}
