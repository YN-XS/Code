#include "stdio.h"
#include "math.h"

int is_triangle(float a, float b, float c)
{
    if (a + b > c && a + c > b && b + c > a)
    {
        return 1;
    }
    return 0;
}

float area(float x, float y, float z)
{
    float p = (x + y + z) / 2;
    return sqrt(p * (p - x) * (p - y) * (p - z));
}

int main()
{
    int a, b, c;
    do
    {
        printf("请分别输入三角形的三条边长\n");
        scanf("%d %d %d", &a, &b, &c);
        if (is_triangle(a, b, c))
        {
            printf("三边可以组成三角形\n");
            printf("三角形的面积为：%.2f", area(a, b, c));
        }
        else
        {
            printf("三边不能组成三角形\n");
        }
    } while (!(a + b > c && a + c > b && b + c > a));
}