# include "iostream"
# include "unordered_map"
# include "unordered_set"
using namespace std;

int main(void){
    unordered_map <string, int> map1;
    map1["ѧ��"] = 39;
    map1["����"] = 21;
    map1["�Ա�"] = 1;

    cout << "ѧ��:" << map1["ѧ��"] << endl;

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

    cout << endl << "10����set����? " << (set1.find(10) == set1.end()) << endl;

    set1.erase(0);
        for(auto p = set1.begin();p!=set1.end();p++){
        cout << *p << " ";
    }

}
