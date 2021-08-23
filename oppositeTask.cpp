#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; ++i)
    {
        int n;
        cin >> n;
        if (n <= 10)
        {
            cout << n << " " << 0 << endl;
        }
        else
        {
            cout << 10 << " " << n - 10 << endl;
        }
    }
}
// LightOJ Problem - https://lightoj.com/problem/opposite-task