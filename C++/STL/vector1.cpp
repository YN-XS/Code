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
        // forѭ���в���ʹ��push_back���Ԫ��
        // ʹ�ø�ֵ���������Ԫ��
        array[i] = 2*i;
    }
    
    // ��array.begin()֮ǰ����Ԫ�أ���begin()֮ǰ���� ==>������Ԫ��֮ǰ����Ϊ�µ���Ԫ��
    array.insert(array.begin(),-100);
    // ��array.end()֮ǰ����Ԫ�أ���end()֮ǰһ�� ==>����ĩβԪ�أ���Ϊ�µ�����ĩβԪ��
    array.insert(array.end(),100);

    // ɾ����Ԫ��
    array.erase(array.begin());
    // ɾ��ĩβԪ��
    array.erase(array.end()-1);

    cout << "����array: ";
    for(auto p=array.begin();p!=array.end();p++){
        cout << *p << " ";
    }


    cout << endl << "��Ԫ�ص�ַ- arr.begin()" << endl << *array.begin();
    cout << endl << "βԪ�ص���һ����ַ(���ݲ�ȷ��)- arr.end()" << endl << *array.end();
    cout << endl << "βԪ�ص�ַ- arr.end()-1" << endl << *(array.end()-1);

    cout << endl << "��Ԫ��" << array.front();
    cout << endl << "βԪ��" << array.back();

    cout << endl << array.size();
    cout << endl << array[array.size()-1];
    // cout << endl << *(array+1);
}