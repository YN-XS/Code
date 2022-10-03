#include<stdio.h>
#include<stdlib.h>
#define num 15
int main(){
    int i,j;
    int arr[num][num] = {0};
    for(i=0;i<num;i++){
        arr[i][0] = 1;
        arr[i][i] = 1;
    }
    for(i=2;i<num;i++){
        for(j=1;j<i;j++){
            arr[i][j] = arr[i-1][j-1]+arr[i-1][j];
        }
    }
    for(i=0;i<num;i++){
        for(j=num;j>i;j--){
            printf("   ");
        }
        for(j=0;j<=i;j++){
            printf("%6d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
