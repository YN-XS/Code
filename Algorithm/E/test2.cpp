/*
��Ŀ����ҵ���ŵĽ������������ɡ�����(I)���ڻ����10��Ԫʱ���������10%�������
��������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣��ɿ���
��������7.5%��20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%��40��60��֮��ʱ����
������40��Ԫ�Ĳ��֣������3%��60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%������
������100��Ԫʱ������100��Ԫ�Ĳ��ְ�1%��ɣ��Ӽ������뵱������I����Ӧ���Ž���������
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    long int bonus1 = 100000*0.100;
    long int bonus2 = 100000*0.075;
    long int bonus3 = 200000*0.050;
    long int bonus4 = 200000*0.030;
    long int bonus5 = 400000*0.015;
    long int profit;
    long int bonus;
    scanf("%ld",&profit);
    printf("profit = %ld\n",profit);
    if(profit<=100000)
        bonus = profit*0.1;
    else if(profit>100000 && profit<=200000)
        bonus = bonus1+(profit-100000)*0.075;
    else if(profit>200000 && profit<=400000)
        bonus = bonus1+bonus2+(profit-200000)*0.05;
    else if(profit>400000 && profit<=600000)
        bonus = bonus1+bonus2+bonus3+(profit-400000)*0.03;
    else if(profit>600000 && profit<=1000000)
        bonus = bonus1+bonus2+bonus3+bonus4+(profit-600000)*0.015;
    else
        bonus = bonus1+bonus2+bonus3+bonus4+bonus5+(profit-1000000)*0.01;
    printf("%ld",bonus);
}