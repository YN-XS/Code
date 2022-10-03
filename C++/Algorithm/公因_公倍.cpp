# include "iostream"
using namespace std;

int gcd(int x,int y){
    int temp = y;
    while(x%y!=0){  // 假定x>y——>x%y否则y%x
        temp = x%y;
        x = y;      // 将较小的数y赋给较大的数x
        y = temp;   // 将x%y的余数赋给较小的数y
    }
    return temp;
};

int main(void){
    int x,y;
    x = 36;
    y = 32;
    int result = gcd(x,y);
    cout << "最大公约数: " << result;
    cout << "最小公倍数: " << x*y/result;
}