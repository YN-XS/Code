#include"stdio.h"
void QuickSort(int arr[],int low,int high){
        int i = low;
        int j = high;
        if(i>j)
            return;
        //low�����high���������
        int temp = arr[low];
        //û���õ���������ֱ�Ӹ�ֵ���м�temp��¼���ǵ�i��λ�õ�ֵ
        //i�������ʵ����lowλ�õ�ֵ�������ù̶���0��low����һ�����ǵ�0��λ��
        while (i < j) {
            while (arr[j] >= temp && i < j)
                //�Ƚ�������ֵ�Ĵ�Сʱ��Ҫ���˵��ں�
                j--;
            if (i < j)
                arr[i] = arr[j];
        //ע�����ȴ��ұߵ�j��ʼ���ȽϺ��滻��һ��j�ҵ���tempС��ֵ�ͽ�����ֵ����arr[i]
            while (arr[i] <= temp && i < j)
                //�Ƚ�������ֵ�Ĵ�Сʱ��Ҫ���˵��ں�
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
	printf("2000100739���ӿ�\n"); 
    int array[] = {49, 38, 65, 97, 76, 13, 27, 49, 10};
    int size = sizeof(array) / sizeof(int);

    printf("��%d������ \n", size);
    printf("ԭʼ����\n");
    for(int i = 0;i<=8;i++)
        printf(" %d ",array[i]);
    printf("\n\n");
    QuickSort(array, 0, size - 1);
}
