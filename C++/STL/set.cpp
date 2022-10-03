# include "iostream"
# include "vector"
# include "set"
using namespace std;


int main(void){
    vector<int> v = {1,1,2,3,4,5,3,2};

    // ����Ĭ�ϴ�С��������
    set<int> set1;
    // ʹ��greater<����>���Ӵ�С����
    set<int,greater<int>> set2={1,5,2,3,7,3};

    // ���ü��ϵ����ظ��Ժ��Զ�����ȥ�أ�
    for(auto p:v){
        set1.insert(p);
    }

    // ɾ��Ԫ��data / ��ַ
    set1.erase(set1.begin());
    set1.erase(2);

    for(auto p=set1.begin();p!=set1.end();p++){
        cout << *p << " ";
    }
    cout << endl;

    // find(data)���ҵ�data�򷵻����ĵ�ַ���Ҳ����򷵻�ĩβԪ�ص�ַ
    cout << *set1.find(4) << "  " << *set1.find(10) << endl;
    
    // �жϼ���set�Ƿ�Ϊ��
    cout << set1.empty() << endl;

    // �жϼ������Ƿ����ĳԪ��
    // ����set�����е�Ԫ���Զ�ȥ�أ�Ҫô0����Ԫ�أ�Ҫôֻ��1����Ԫ��
    cout << set1.count(5) << endl;


}