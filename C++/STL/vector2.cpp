# include "iostream"
# include "algorithm" 
# include "vector"
using namespace std;

int main(void){
    vector<int> arr = {1,2,3,4,5,6,1,2,3,7,8,3,2,1};
    
    cout << "原来的数组: ";
    for(auto p:arr){
        cout << p << " ";
    }

    cout << endl;

    arr.erase(arr.begin());
    arr.erase(arr.end()-1);

    cout << "擦除首尾元素: ";
    for(auto p:arr){
        cout << p << " ";
    }
    cout << endl;

    sort(arr.begin(), arr.end());

    cout << "排序后的数组: ";
    for(auto x:arr){
        cout << x << " ";
    }
    cout << endl;

    arr.erase(unique(arr.begin(),arr.end()),arr.end());

    // 一定要先排序后才能这样去重
    cout << "去重后的数组: ";
    for(auto x:arr){
        cout << x << " ";
    }
    cout << endl;

    arr.erase(arr.begin(),arr.begin()+3);

    cout << "去除下标[0,3)中元素: ";
    for(auto x:arr){
        cout << x << " ";
    }
}