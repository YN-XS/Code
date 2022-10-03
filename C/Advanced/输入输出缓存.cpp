#include "stdio.h"
#include "string.h"
int main()
{
    char str[20];
    int i = 0;
    char c;
    while (true)
    {
        c = getchar();
        str[i++] = c;
        if (c == '\n')
        {
            break;
        }
    }
    // str[i] = '\0';
    printf("%s", str);
}