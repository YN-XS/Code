# include "iostream"
using namespace std;

int* func(){
    int arr[10] = {0,1,2,3,4,5,6,7};
    return arr;
}

int main(void){
    cout << func() << endl;
}