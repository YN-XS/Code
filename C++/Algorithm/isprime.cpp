# include "iostream"
# include "cmath"
using namespace std;

bool isprime(int num){
    for(int i = 2;i<int(sqrt(num))+1;i++){
        if(num % i == 0)
            return false;
    }
    return true;
}

int main(){
    cout << isprime(2);
}