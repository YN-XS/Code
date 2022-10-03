# include "iostream"
using namespace std;

void Bubble_sort(int *arr,int length);

// 二分查找必须是有序的数组
// 根据有序数列中，中间值和查找元素的大小关系，不断缩减查找范围
int look_up(int* arr,int num,int length){
    int low=0,high=length-1,mid;
    while(low<=high){
        mid = (low+high)/2;
        if(num<arr[mid]){   // 说明num在arr[mid]左边，最大查找位置左移
            high = mid-1;
        }
        else if(num>arr[mid]){  // 说明num在arr[mid]右边，最小查找位置右移
            low = mid+1;
        }
        else
            return mid;
    }
    return -1;  // 没有找到返回-1
}


int main(void){
    int arr[] = {10,80,50,60,90,40,30,20,70};
    int length = sizeof(arr)/sizeof(arr[0]);
    int num;

    Bubble_sort(arr,length);
    for(auto i:arr){
        cout << i << " ";
    }
    cout << endl << "请输入要查找的值: ";
    cin >> num;

    int index = look_up(arr,num,length);
    cout << num <<"的下标为: " << index;

}


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