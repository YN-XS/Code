//题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？

#include<stdio.h>
#include<stdlib.h>

int main(){
    int val = 0;
    int count = 0;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            for(int k=1;k<=4;k++){
                if(i!=j && i!=k && j!=k){
                    val = i*100+j*10+k;
                    count++;
                    printf("%d  ",val);
                }
            }
        }
    }
    printf("\n");
    printf("The number of val is %d",count);
    return 0;
}