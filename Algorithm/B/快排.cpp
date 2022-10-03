#include "stdio.h"

void Quick_Sort(int *arr, int left, int right);
void Traverse(int *arr, int length);

int main()
{
    int arr[] = {60, 20, 40, 30, 50, 90, 70, 10};
    int length = sizeof(arr) / sizeof(arr[0]);
    Quick_Sort(arr, 0, 7);
    Traverse(arr, length);
}

void Quick_Sort(int *arr, int left, int right)
{
    // 新定义 i 和 j的指针下标是必要的
    //传入的left和right只是确定数组的首尾下标，不可以变化
    if (left > right)
        return;
    int i = left;
    int j = right;
    int temp = *(arr + i);
    while (i < j)
    {
        while (i < j && arr[j] >= temp)
        {
            j--;
        }
        if (i < j)
        {
            arr[i] = arr[j];
        }
        while (i < j && arr[i] <= temp)
        {
            i++;
        }
        if (i < j)
        {
            arr[j] = arr[i];
        }
    }
    //当i和j两个指针下标相等时，将选择的标志数据放入其中
    arr[i] = temp;
    //尽管传入的数组始终是同一个，但传入的left和right不同，缩小了每次递归的数组范围
    Quick_Sort(arr, left, i - 1);
    Quick_Sort(arr, i + 1, right);
}

void Traverse(int *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", *(arr + i));
    }
}