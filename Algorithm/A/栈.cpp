#include<stdio.h>
#include<stdlib.h>
#define SIZE 100    //��ʼ������
struct SqStack{
	int* base;//ջ��ָ��
	int* top;//ջ��ָ��
};

bool init(SqStack& S);
bool push(SqStack& S,int val);
void traver(SqStack S);
bool getTop(SqStack S,int & topVal);
bool pop(SqStack& S,int &popval);
int main(){
	SqStack S;
	if(init(S))
		printf("��ʼ���ɹ���\n");
	int num,val;
	printf("������Ԫ�ظ�����");
	scanf("%d",&num);
	for(int i =1; i<=num;i++)
	{
		printf("��%d��Ԫ��Ϊ��",i);
		scanf("%d",&val);
		push(S,val);
	}
	traver(S);
	system("pause");
	int topVal=0;
	if(getTop(S,topVal))
		printf("ջ��Ԫ��Ϊ��%d\n\n",topVal);
	traver(S);
	system("pause");
	if(pop(S,topVal))
		printf("������Ԫ��Ϊ��%d\n\n",topVal);
	traver(S);
	free(S.base);
	system("pause");
}

bool init(SqStack& S){
	S.top=S.base=(int*)malloc(SIZE*sizeof(int));
	if(!S.top)
		return false;
	else
		return true;
}

bool push(SqStack& S,int val){
	if(S.top-S.base==SIZE)
		return false;
	else{
		*S.top=val;
		S.top++;
	}	
	return true;
}

void traver(SqStack S){
	printf("��ջ�׿�ʼ������");
	int* p = S.base;
	while(p<S.top)
		printf("%5d",*p++);
	printf("\n\n");
}

bool getTop(SqStack S,int & topVal){
	////////////////////////////////////////////////
	if (S.top-S.base==0){
		return false;
	}
	else
		topVal = *(S.top-1);
	return true;
}

bool pop(SqStack& S,int &popval){
	//////////////////////////////////////////////
	if(S.top-S.base==0){
		return false;
	}
	else
		S.top=S.top-1;
		popval = *S.top;
	return true;

}
