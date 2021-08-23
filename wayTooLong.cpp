#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    // Test case check
    for (int i = 1; i <= t; ++i)
    {
        string s;
        cin>>s;
        if (s.size() > 10)
        {
            cout<<s[0] << (s.size() - 2) << s[s.size() - 1]<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
}
// Codeforce problem - https://codeforces.com/problemset/problem/71/A 