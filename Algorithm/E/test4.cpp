//��Ŀ������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
//ע��scanf������printf������˫����ֻ�����ͷ���%�������ڣ�����������
#include<stdio.h>

int main(){
    int year,month,day,sum;
    printf("please input year,month,day\n");
    scanf("%d,%d,%d",&year,&month,&day);
    printf("\n%d,%d,%d\n",year,month,day);
    switch(month){
        case 1:sum=0;break;
        case 2:sum=31;break;
        case 3:sum=59;break;
        case 4:sum=90;break;
        case 5:sum=120;break;
        case 6:sum=151;break;
        case 7:sum=181;break;
        case 8:sum=212;break;
        case 9:sum=243;break;
        case 10:sum=273;break;
        case 11:sum=304;break;
        case 12:sum=334;break;
    }
    sum = sum+day;
    if(year/4==0 && year/100!=0 || year/400==0)
        sum+=1;
    else
        sum+=0;
    printf("It is the %d th day of %d year",sum,year);
}