#include<stdio.h>
#include<stdlib.h>
#define INIT_SIZE 60

typedef struct{
	int* data;
	int size;
}List;

bool initList(List& L);
bool ifEmpty(List L);
int getLength(List L);
void printList(List L);
bool insertList(List& L,int i, int e);//在第i个位置插入元素e
bool deleteElem(List& L, int i,int & e);//删除表中第i个元素

int main(){
	printf("2000100739 姜子俊\n");
	List L;
	if(initList(L))
		printf("初始化成功！！\n");
	if(ifEmpty(L))
		printf("表是空的！！\n");

	system("pause");
	insertList( L,1,11);
	insertList( L,1,22);
	insertList( L,1,33);
	insertList( L,1,44);
	printList(L);
	system("pause");

	int insertElem = 0, insertLoc = 0;
	printf("插入位置为：");
	scanf("%d",&insertLoc);
	printf("插入数据为：");
	scanf("%d",&insertElem);
	if(insertList(L,insertLoc,insertElem))
	{
		printf("插入后 ");
		printList(L);
	}
	else 
		printf("插入失败！\n");

	system("pause");
	int delElem = 0;
	printf("删除第几个数据？");
	scanf("%d",&insertLoc);
	if(deleteElem(L,insertLoc,delElem))
	{
		printf("被删除的元素是：%d\n ",delElem);
		printf("删除后表中数据为： ");
		printList(L);
	}
	else 
		printf("删除失败！\n");
	free(L.data);
	system("pause");
}

bool initList(List& L){
	L.data=(int*)malloc(sizeof(int)*INIT_SIZE);
	if(L.data == NULL)
		return false; 
	L.size = 0;
	return true;
}

bool ifEmpty(List L){
	return (L.size==0)?true:false;
}

int getLength(List L){

	return L.size;
}

bool insertList(List& L,int i, int e)
{
	if (L.size==INIT_SIZE||i<1||i>L.size+1)
	return false;
//int j;
//	for(j=L.size;j>=i;j--)
//		L.data[j]=L.data[j-1];
//	L.data[i-1]=e;
//	L.size++;
	int *p = &(L.data[i-1]);
	int *q = &(L.data[L.size-1]);
	while(q>=p)
	{
		*(q+1) = *q;
		q--;
	}
	*p = e;
	L.size++;
	return true;
}

void printList(List L){
	printf("表的遍历结果为：");
	for(int i = 0; i <= L.size-1;i++)
	{
		printf("%d\t",L.data[i]);
	}
	printf("\n");
}

bool deleteElem(List& L, int i,int& e){
	if (i<1||i>L.size)
		return false;
//	e = L.data[i-1];
//	for(int j=i;j<L.size;j++)
//	{
//		L.data[j-1]=L.data[j];
//	}
//	L.size--;
	int *p = &(L.data[i-1]);
	int *q = &(L.data[L.size-1]);
	e = *p;
	while(p<q)
	{
		*p = *(p+1);
		p++;
	}
	L.size--;
	return true; 
}

