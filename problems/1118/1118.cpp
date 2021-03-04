//https://www.e-olymp.com/ru/problems/1118
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, mn = 1000000, x, mx = -1000000;

    cin >> n;
    if(n == 1 || n == 0)
    {
        cout << "Ooops!";
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            mx = max(mx, x);
            mn = min(mn, x);
        }
        cout << mn << " " << mx << endl;
    }
    return 0;
}