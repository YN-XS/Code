# include "iostream"
using namespace std;

// ÿ�־�������Ԫ�صıȽϺͽ���������ֵ������ĩβ
void Bubble_sort(int *arr,int length){
    cout << length << endl;

    for(int i=0;i<length-1;i++){    // ����n�����ݵ����飬ֻ��Ҫ��n-1�֣�ÿ��һ�֣�ð����ǰ��һ����ֵ
        for(int j=0;j<length-i-1;j++){  // ÿ��һ�鶼�ӵ�һ��λ�ÿ�ʼ��͡�����δ�źõ����ݡ��Ƚ�
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(void){
    int arr[] = {2,3,1,6,8,9,5,4,7};
    int length = sizeof(arr) / sizeof(arr[0]);
    Bubble_sort(arr,length);
    for(int i:arr){
        cout << i << " ";
    }
}