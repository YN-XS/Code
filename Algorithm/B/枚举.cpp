#include <stdio.h>

int mj(int *arr, int arr_len);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    mj(arr, arr_len);
}
int mj(int *arr,int arr_len)
{
    
    printf("���鳤��Ϊ��%d\n", arr_len);
    int count = 0;
    for (int i = 0; i < arr_len; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] + arr[j] == 10 && arr[j] != arr[i])
                count += 1;
        }
    }
    printf("��������������������У�%d��\n", count);
    return count;
}