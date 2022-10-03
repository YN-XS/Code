#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    string s;
    map<char, int> m;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (m.count(s[i]) == 0)
            m[s[i]] = 1;
        else
            m[s[i]] = m[s[i]] + 1;
    }
    // for (auto p = m.begin(); p != m.end(); p++){
    //     cout << p->first << " " << p->second << endl;
    // }

    char ms;
    int num = 0;
    for (auto p = m.begin(); p != m.end(); p++)
    {
        if (p->second > num){
          num = p->second;
          ms = p->first;
        }  
    }
    cout << ms << endl
         << num;
    return 0;
}