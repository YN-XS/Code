#include "stdio.h"
int main()
{
    char letter;
    while (true)
    {
        scanf("%c", &letter);
        switch (letter)
        {
        case 'a':
            printf("%s\n", "alpha");
            break;
        case 'b':
            printf("%s\n", "beta");
            break;
        case 'c':
            printf("%s\n", "gamma");
            break;
        default:
            printf("%c is error\n", letter);
        }
    }
    return 0;
}