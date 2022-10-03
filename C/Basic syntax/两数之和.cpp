#include "stdio.h"
int add(int a, int b)
{
    return a + b;
}

int main()
{
    int result;
    result = add(2, 4);
    printf("%d\n", result);
}