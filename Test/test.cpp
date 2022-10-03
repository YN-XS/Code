# include <iostream>
using namespace std;

int main(void) {
    int k;
    long double n = 0, S = 0;
    cin >> k;
    while (S <= k) {
        n++;
        S += 1.0 / n;
    }
    cout << int(n);
    return 0;
}