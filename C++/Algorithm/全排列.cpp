# include "iostream"
# include "algorithm"
# include "vector"
using namespace std;

int main(void){
    vector<char> arr = {'a','b','c'};

    do{
        for(auto i:arr){
            cout << i << " ";
        }
        cout << endl;
    }while(next_permutation(arr.begin(), arr.end()));
}