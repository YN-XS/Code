#include "stdio.h"
int main()
{
    int num;
    scanf("%d", &num);
    if ((num >= 10) && (num <= 20))
    {
        printf("yes\n");
        printf("YES\n");
    }
    else
    {
        printf("no\n");
        printf("NO\n");
    }
}