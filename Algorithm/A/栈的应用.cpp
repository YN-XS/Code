# include<stdio.h>
# include<stdlib.h>
# define SIZE 100
struct SqStack{
	int* top;
	int* base;
};
bool init(SqStack& S); 
bool push(SqStack& S,int val);
void traver(SqStack S);
bool getTop(SqStack S,int &topVal);
bool pop(SqStack& S,int &popval);
bool clear(SqStack S);
bool destroy(SqStack S);
void conversation();
int main(){
//	SqStack S;
//	if(init(S)){
//		printf("���ӿ�  2000100739\n"); 
//		printf("��ʼ���ɹ���\n");
//	}
//	int num,val;
//	printf("����Ԫ�ظ���: ");
//	scanf("%d",&num);
//	for(int i=1;i<=num;i++){
//		printf("��%d��Ԫ��Ϊ: ",i);
//		scanf("%d",&val);
//		push(S,val);
//	}
//	traver(S);
//	system("pause");
//	int topVal;
//	if(getTop(S,topVal)){
//		printf("ջ��Ԫ��Ϊ: %d\n\n",topVal);
//	}
//	traver(S);
//	system("pause");
//	int popval;
//	if(pop(S,popval)){
//		printf("������Ԫ��Ϊ: %d\n\n",popval);
//	}
//	traver(S);
//	system("pause");
	printf("2000100739 ���ӿ�\n\n");
	conversation();
	
}

void conversation()
{
	SqStack S;
	init(S);
	int n,r,q;
	while(true)
	{
	printf("��������Ҫת����ʮ������(����-1����)��");
	scanf("%d",&n);
	if(n==-1)
	{
		break;
	}
	do
	{
	printf("��������Ҫת���Ľ���(ֻ֧��2��4��6��8�Ľ���ת��)\n");
	scanf("%d",&r);
	}while(r!=2&&r!=4&&r!=6&&r!=8);
	while(n!=0)
	{
		push(S,n%r);
		n = n/r;
	}
	while(S.base!=S.top)
	{
		pop(S,q);
		printf("%d",q);
	}
	printf("\n");
	}
}
bool init(SqStack& S){
	S.top=S.base=(int*)malloc(SIZE*sizeof(int));
	if(!S.top){
		return false;
	}
	else
		return true;
}
bool clear(SqStack S){
	S.top = S.base;
}
bool destroy(SqStack S){
	free(S.base);
	S.top = NULL;
	S.base = NULL;
}
bool destroy(SqStack S);
bool push(SqStack& S,int val){
	if(S.top-S.base==SIZE)
		return false;
	else
		*S.top=val;
		S.top++;
	return true;
}
void traver(SqStack S){
	printf("��ջ�׿�ʼ����: ");
	int* p=S.base;
	while(p<S.top){
		printf("%5d",*p++);
	}
	printf("\n\n");
}
bool getTop(SqStack S,int &topVal){
	if (S.top-S.base==0){
		return false;
	}
	else
		topVal = *(S.top-1);
		return true;
}
bool pop(SqStack& S,int &popval){
	if(S.top-S.base==0){
		return false;
	}
	else
		S.top=S.top-1;
		popval = *S.top;
	return true;
}

