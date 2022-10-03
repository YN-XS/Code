# include"stdio.h"
int main(){
    int a = 8;
    int *A = &a;
    printf("%d\n", A);
    printf("%d\n", *A);
    void *B = A;
    int *C = (int*)B;
    printf("%d\n", B);
    printf("%d\n", C);
}