# include "iostream"
using namespace std;

// 每轮经过两两元素的比较和交换，将最值交换到末尾
void Bubble_sort(int *arr,int length){
    cout << length << endl;

    for(int i=0;i<length-1;i++){    // 对于n个数据的数组，只需要排n-1轮，每排一轮，冒出当前的一个最值
        for(int j=0;j<length-i-1;j++){  // 每排一遍都从第一个位置开始与和【后面未排好的数据】比较
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