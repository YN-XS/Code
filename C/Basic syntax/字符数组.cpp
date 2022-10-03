#include "stdio.h"
int main()
{
    char str[] = "Hello, world";
    printf("%s\n", str);
    printf("%s\n", str);
    int i = 0;
    //此处需要注意是数组元素str[i]!='\0',而不是i!='\0'
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    return 0;
}