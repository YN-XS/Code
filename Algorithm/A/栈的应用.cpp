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
//		printf("姜子俊  2000100739\n"); 
//		printf("初始化成功！\n");
//	}
//	int num,val;
//	printf("请输元素个数: ");
//	scanf("%d",&num);
//	for(int i=1;i<=num;i++){
//		printf("第%d个元素为: ",i);
//		scanf("%d",&val);
//		push(S,val);
//	}
//	traver(S);
//	system("pause");
//	int topVal;
//	if(getTop(S,topVal)){
//		printf("栈顶元素为: %d\n\n",topVal);
//	}
//	traver(S);
//	system("pause");
//	int popval;
//	if(pop(S,popval)){
//		printf("弹出的元素为: %d\n\n",popval);
//	}
//	traver(S);
//	system("pause");
	printf("2000100739 姜子俊\n\n");
	conversation();
	
}

void conversation()
{
	SqStack S;
	init(S);
	int n,r,q;
	while(true)
	{
	printf("请输入你要转换的十进制数(输入-1结束)：");
	scanf("%d",&n);
	if(n==-1)
	{
		break;
	}
	do
	{
	printf("请输入你要转换的进制(只支持2，4，6，8的进制转换)\n");
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
	printf("从栈底开始遍历: ");
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

