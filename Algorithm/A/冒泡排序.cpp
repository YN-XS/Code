#include <iostream>
#include <stdio.h>
#include <stdlib.h>
void trave(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}
void bubble_sort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int flag = 1;
        for (int j = 0; j < size - i - 1; j++)
        {
            //遍历第一个数据至倒数第二个数据，每次与其下一个数据比较 (避免越界)
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                flag = 0;
                //如果 flag从1变成了0则说明 if语句被执行，所以发生了交换
            }
        }
        if (flag == 1)
            break;
        // flag 仍然是1，说明没有发生交换，则整个数组已经排序完成，不需要再进行后续的遍历，所以跳出，不打印
        trave(arr, size);
    }
}
int main()
{
    printf("2000100739 姜子俊\n");
    int arr[] = {10, 40, 90, 30, 50, 20, 70, 60, 0, 80};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("有%d个数字\n", size);
    bubble_sort(arr, size);
}
