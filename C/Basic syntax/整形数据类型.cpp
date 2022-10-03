# include "stdio.h"
int main(){
    printf("sizeof char = %d\n", sizeof(char));
    printf("sizeof short = %d\n", sizeof(short));
    printf("sizeof int = %d\n", sizeof(int));
    printf("sizeof long = %d\n", sizeof(long));
    printf("sizeof long long = %d\n", sizeof(long long));
    int a;
    printf("sizeof a = %d\n", sizeof(a));
    printf("sizeof 100 = %d\n", sizeof(100));
}