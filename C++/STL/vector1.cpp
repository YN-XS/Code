# include "iostream"
# include "vector"
using namespace std;

int main(void){
    vector<int> array;
    vector<int> arr1(10);
    vector<int> arr2(10, 2);
    vector<int> arr3 = {1,2,3,4,5};

    array.resize(10);

    for(int i=0;i<array.size();i++){
        // for循环中不能使用push_back添加元素
        // 使用赋值语句进行添加元素
        array[i] = 2*i;
    }
    
    // 在array.begin()之前插入元素，在begin()之前插入 ==>容器首元素之前，成为新的首元素
    array.insert(array.begin(),-100);
    // 在array.end()之前插入元素，在end()之前一个 ==>容器末尾元素，成为新的容器末尾元素
    array.insert(array.end(),100);

    // 删除首元素
    array.erase(array.begin());
    // 删除末尾元素
    array.erase(array.end()-1);

    cout << "数组array: ";
    for(auto p=array.begin();p!=array.end();p++){
        cout << *p << " ";
    }


    cout << endl << "首元素地址- arr.begin()" << endl << *array.begin();
    cout << endl << "尾元素的下一个地址(内容不确定)- arr.end()" << endl << *array.end();
    cout << endl << "尾元素地址- arr.end()-1" << endl << *(array.end()-1);

    cout << endl << "首元素" << array.front();
    cout << endl << "尾元素" << array.back();

    cout << endl << array.size();
    cout << endl << array[array.size()-1];
    // cout << endl << *(array+1);
}