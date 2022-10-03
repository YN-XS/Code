# include "iostream"
using namespace std;

void Bubble_sort(int *arr,int length);

// ���ֲ��ұ��������������
// �������������У��м�ֵ�Ͳ���Ԫ�صĴ�С��ϵ�������������ҷ�Χ
int look_up(int* arr,int num,int length){
    int low=0,high=length-1,mid;
    while(low<=high){
        mid = (low+high)/2;
        if(num<arr[mid]){   // ˵��num��arr[mid]��ߣ�������λ������
            high = mid-1;
        }
        else if(num>arr[mid]){  // ˵��num��arr[mid]�ұߣ���С����λ������
            low = mid+1;
        }
        else
            return mid;
    }
    return -1;  // û���ҵ�����-1
}


int main(void){
    int arr[] = {10,80,50,60,90,40,30,20,70};
    int length = sizeof(arr)/sizeof(arr[0]);
    int num;

    Bubble_sort(arr,length);
    for(auto i:arr){
        cout << i << " ";
    }
    cout << endl << "������Ҫ���ҵ�ֵ: ";
    cin >> num;

    int index = look_up(arr,num,length);
    cout << num <<"���±�Ϊ: " << index;

}


void Bubble_sort(int *arr,int length){
    cout << length << endl;

    for(int i=0;i<length-1;i++){    // ����n�����ݵ����飬ֻ��Ҫ��n-1�֣�ÿ��һ�֣�ð����ǰ��һ����ֵ
        for(int j=0;j<length-i-1;j++){  // ÿ��һ�鶼�ӵ�һ��λ�ÿ�ʼ��͡�����δ�źõ����ݡ��Ƚ�
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}