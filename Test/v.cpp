# include "iostream"
# include "algorithm" 
# include "vector"
using namespace std;

int main(void){
    vector<int> arr = {1,2,3,4,5,6,1,2,3,7,8,3,2,1};
    
    cout << "ԭ��������: ";
    for(auto p:arr){
        cout << p << " ";
    }

    cout << endl;

    arr.erase(arr.begin());
    arr.erase(arr.end()-1);

    cout << "������βԪ��: ";
    for(auto p:arr){
        cout << p << " ";
    }
    cout << endl;

    sort(arr.begin(), arr.end());

    cout << "����������: ";
    for(auto x:arr){
        cout << x << " ";
    }
    cout << endl;

    arr.erase(unique(arr.begin(),arr.end()),arr.end());

    // һ��Ҫ��������������ȥ��
    cout << "ȥ�غ������: ";
    for(auto x:arr){
        cout << x << " ";
    }
    cout << endl;

    arr.erase(arr.begin(),arr.begin()+3);

    cout << "ȥ���±�[0,3)��Ԫ��: ";
    for(auto x:arr){
        cout << x << " ";
    }
}