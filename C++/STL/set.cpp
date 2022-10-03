# include "iostream"
# include "vector"
# include "set"
using namespace std;


int main(void){
    vector<int> v = {1,1,2,3,4,5,3,2};

    // 集合默认从小到大排序
    set<int> set1;
    // 使用greater<类型>，从大到小排序
    set<int,greater<int>> set2={1,5,2,3,7,3};

    // 利用集合的无重复性和自动排序（去重）
    for(auto p:v){
        set1.insert(p);
    }

    // 删除元素data / 地址
    set1.erase(set1.begin());
    set1.erase(2);

    for(auto p=set1.begin();p!=set1.end();p++){
        cout << *p << " ";
    }
    cout << endl;

    // find(data)，找到data则返回它的地址，找不到则返回末尾元素地址
    cout << *set1.find(4) << "  " << *set1.find(10) << endl;
    
    // 判断集合set是否为空
    cout << set1.empty() << endl;

    // 判断集合总是否存在某元素
    // 由于set集合中的元素自动去重，要么0个该元素，要么只有1个该元素
    cout << set1.count(5) << endl;


}