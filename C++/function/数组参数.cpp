# include "iostream"
using namespace std;

void fun1(int arr[], int len);
// 数组作为参数，不设置长度可自动匹配大小,等价于使用int* 类型的数组名来传参
void fun2(int arr[100], int len);
// 数组作为参数，设置长度，则形参中的数组长度必须设置的大于实参中数组的长度

int main(void){
    int arr[6] = {0,1,2,3,4,5};
    int arr2[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13};
    fun1(arr, 6);
    fun2(arr2,10);
    
    for(int p:arr2){
        cout << p << " ";
    }
    
    return 0;
}


void fun1(int arr[], int len){
    for(int i=0;i<len;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void fun2(int arr[100], int len){
    for(int i=0;i<len;i++){
        arr[i] += 10;
        cout << arr[i] << " ";
    }
    cout << endl;
}