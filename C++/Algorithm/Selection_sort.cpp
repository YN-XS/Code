# include "iostream"
using namespace std;

// 每轮得到一个最值的下标
// 最后将当前元素和最小下标处的元素互换
void Selection_sort(int* arr,int length){
    for(int i=0;i<length;i++){
        int min_index = i;      // 每轮按次序取数组元素下标
        // 将当前数组元素下标与其之后的所有下标的元素相比较,j只是用于找到min_index
        for(int j=i+1;j<length;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        // 最值下标不是当前元素时，则需要将当前元素arr[i]与后面的最值下标元素arr[min_index]交换
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