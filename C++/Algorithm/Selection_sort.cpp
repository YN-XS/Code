# include "iostream"
using namespace std;

// ÿ�ֵõ�һ����ֵ���±�
// ��󽫵�ǰԪ�غ���С�±괦��Ԫ�ػ���
void Selection_sort(int* arr,int length){
    for(int i=0;i<length;i++){
        int min_index = i;      // ÿ�ְ�����ȡ����Ԫ���±�
        // ����ǰ����Ԫ���±�����֮��������±��Ԫ����Ƚ�,jֻ�������ҵ�min_index
        for(int j=i+1;j<length;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        // ��ֵ�±겻�ǵ�ǰԪ��ʱ������Ҫ����ǰԪ��arr[i]��������ֵ�±�Ԫ��arr[min_index]����
        if(min_index!=i){
            int temp = arr[min_index];
            arr[min_index] = arr[i];
            arr[i] = temp;
        }
    }
}

int main(void){
    int arr[] = {3,5,7,1,2,6,4};
    int length = sizeof(arr)/sizeof(arr[0]);

    Selection_sort(arr,length);
    for(auto i:arr){
        cout << i << " ";
    }
}