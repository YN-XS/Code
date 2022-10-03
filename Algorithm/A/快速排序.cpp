#include"stdio.h"
void QuickSort(int arr[],int low,int high){
        int i = low;
        int j = high;
        if(i>j)
            return;
        //low如果比high还大就跳出
        int temp = arr[low];
        //没有用到交换而是直接赋值，切记temp记录的是第i个位置的值
        //i保存的其实就是low位置的值，不能用固定的0，low并不一定就是第0个位置
        while (i < j) {
            while (arr[j] >= temp && i < j)
                //比较数组中值的大小时不要丢了等于号
                j--;
            if (i < j)
                arr[i] = arr[j];
        //注意是先从右边的j开始作比较和替换，一旦j找到比temp小的值就将它的值给到arr[i]
            while (arr[i] <= temp && i < j)
                //比较数组中值的大小时不要丢了等于号
                i++;
            if (i < j)
                arr[j] = arr[i];
        }
        arr[i] = temp;
            for(int i = 0;i<=8;i++)
        printf(" %d ",arr[i]);
        printf("\n");
        QuickSort(arr, low, i - 1);
        QuickSort(arr, i + 1, high);
    }

void QuickSort(int arr[],int low,int high);
int main() {
	printf("2000100739姜子俊\n"); 
    int array[] = {49, 38, 65, 97, 76, 13, 27, 49, 10};
    int size = sizeof(array) / sizeof(int);

    printf("有%d个数字 \n", size);
    printf("原始数据\n");
    for(int i = 0;i<=8;i++)
        printf(" %d ",array[i]);
    printf("\n\n");
    QuickSort(array, 0, size - 1);
}
