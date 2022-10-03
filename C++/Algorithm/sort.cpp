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
    // Ĭ�ϴ�С��������
    // ѡ���������ʼλ��������λ�õ�ǰһλ [����ҿ�)
    // end()������ĩβԪ�ص���һλ��ַ

    for(auto p = arr.begin();p!= arr.end();p++){
        cout << *p << " ";
    }
    cout << endl;

    sort(arr.begin(),arr.end(),cmp1);
    // ���ݶ����cmp�����������

    for(auto p = arr.begin();p!=arr.end();p++){
        cout << *p << " ";
    }

}

// �Ӵ�С����>
bool cmp1(int i, int j){
    return i > j;
}

// ��С��������<
bool cmp2(int i, int j){
    return i < j;
}