#include "stdio.h"
#include "string.h"
int main()
{
    char str;
    str = getchar();
    str = str - 32;
    printf("%c\n", str);
}