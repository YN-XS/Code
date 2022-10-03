#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    node* pNext;
}Node, *PNode;

 //ʵ�ִ�ͷ���ĵ�����ĸ������

Node* createList();   //���������ش����õĵ������ͷָ��
int length(PNode pHead);//���
void traverse(PNode pHead); //����
bool insertList(PNode pHead, int pos, int val);//��pos������λ�ò���val
bool deleteElem(PNode pHead, int pos); //ɾ����pos�����


int main(void)
{
   //test
    Node* pHead = createList();
    traverse(pHead);
    printf("������Ϊ��%d \n",length(pHead));

    system("pause");
    printf("������Ҫ�����λ�ã�");
	int pos, val;
	scanf("%d",&pos);
	printf("������Ҫ�����������");
	scanf("%d",&val);
    if(insertList(pHead,pos,val)){
	   printf("����ɹ�!\n");
	   traverse(pHead);
    }
    else {
	   printf("����ʧ��!\n");
    }

    system("pause");
	printf("������Ҫɾ���ڼ�������");
	scanf("%d",&pos);
    if(deleteElem(pHead,pos)) {
	   printf("ɾ���ɹ�!\n");
	   traverse(pHead);
    }
    else {
	   printf("ɾ��ʧ��!\n");
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

    printf("��������Ҫ�Ľڵ������");
    scanf("%d", &len);
    for(int i=1;i<=len;i++){
        printf("�������%d���ڵ��ֵ��", i);
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
    printf("�������Ϊ: ͷ���-> ");
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
	node*pNew=(node*)malloc(sizeof(node));//����node*�͵Ľ�㲢���ý����ʼλ�ø���ָ��pNew
	pNew->data=val;
	pNew->pNext=p->pNext;//��
	p->pNext=pNew; //��
    return true;
}


//bool deleteElem(PNode pHead, int pos,int& e)  ԭ����
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
