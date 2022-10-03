# include "iostream"
# include "unordered_map"
# include "unordered_set"
using namespace std;

int main(void){
    unordered_map <string, int> map1;
    map1["学号"] = 39;
    map1["年龄"] = 21;
    map1["性别"] = 1;

    cout << "学号:" << map1["学号"] << endl;

    for(auto p = map1.begin(); p != map1.end();p++){
        cout << p->first << ":" << p->second << endl;
    }
    
    unordered_set<int> set1;

    for(int i = 0;i < 9;i++){
        set1.insert(i);
    }

    for(auto p = set1.begin();p!=set1.end();p++){
        cout << *p << " ";
    }

    cout << endl << "10不在set中吗? " << (set1.find(10) == set1.end()) << endl;

    set1.erase(0);
        for(auto p = set1.begin();p!=set1.end();p++){
        cout << *p << " ";
    }

}
