#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0, res = 0;
    cin >> n;
    if (n | 1)
    {
        res = n / 2;
    }
    else
    {
        res = ((-1) * ((n + 1) / 2));
    }
    cout << res << endl;
}