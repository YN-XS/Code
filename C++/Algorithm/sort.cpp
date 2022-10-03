# include "iostream"
# include "vector"
# include "algorithm"
using namespace std;

bool cmp1(int i, int j);
bool cmp2(int i, int j);

int main(void){
    vector<int> arr;
    arr.resize(10);

    for(int i = 0;i<10;i++){
        arr[i] = 9 - i;
    }
    for(auto p = arr.begin();p!= arr.end();p++){
        cout << *p << " ";
    }
    cout << endl;

    for(int i = -1;i>-6;i--){
        arr.push_back(i);
    }
    for(auto p = arr.begin();p!= arr.end();p++){
        cout << *p << " ";
    }
    cout << endl;

    sort(arr.begin(), arr.end());
    // 默认从小到大排序
    // 选择排序的起始位置至结束位置的前一位 [左闭右开)
    // end()是数组末尾元素的下一位地址

    for(auto p = arr.begin();p!= arr.end();p++){
        cout << *p << " ";
    }
    cout << endl;

    sort(arr.begin(),arr.end(),cmp1);
    // 根据定义的cmp规则进行排序

    for(auto p = arr.begin();p!=arr.end();p++){
        cout << *p << " ";
    }

}

// 从大到小排序>
bool cmp1(int i, int j){
    return i > j;
}

// 从小到大排序<
bool cmp2(int i, int j){
    return i < j;
}