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
            //������һ�������������ڶ������ݣ�ÿ��������һ�����ݱȽ� (����Խ��)
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                flag = 0;
                //��� flag��1�����0��˵�� if��䱻ִ�У����Է����˽���
            }
        }
        if (flag == 1)
            break;
        // flag ��Ȼ��1��˵��û�з��������������������Ѿ�������ɣ�����Ҫ�ٽ��к����ı�������������������ӡ
        trave(arr, size);
    }
}
int main()
{
    printf("2000100739 ���ӿ�\n");
    int arr[] = {10, 40, 90, 30, 50, 20, 70, 60, 0, 80};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("��%d������\n", size);
    bubble_sort(arr, size);
}
