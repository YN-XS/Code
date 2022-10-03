#include "stdio.h"
void func(int);

int main()
{
    func(0);
}

void func(int a)
{
    if (a == 5)
        return;
    printf("before:%d\n", a);
    func(a + 1);
    printf("after:%d\n", a);
}
