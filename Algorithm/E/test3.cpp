//题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少

#include<stdio.h>
#include<math.h>

int main(){
    float val1,val2;
    for(int i=1;i<=10000000;i++){
        val1 = sqrt(i+100);
        val2 = sqrt(i+100+168);
        if(val1==int(val1) && val2==int(val2)){
            printf("%d\n",i);
        }
    }
    return 0;
}
//完全平方数：开平方后是一个整数
//整数：转化为整数类型等于本身