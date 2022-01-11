// https://www.eolymp.com/ru/problems/10924
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, g, y, r;
    cin >> n >> g >> y >> r;
    ll mod = g * 2 + y * 2 + r;
    n %= mod;
    if (n <= g)
    {
        cout << "G";
        return;
    }
    n -= g;
    if (n <= y)
    {
        cout << "Y";
        return;
    }
    n -= y;
    if (n <= r)
    {
        cout << "R";
        return;
    }
    n -= r;
    if (n <= y)
    {
        cout << "Y";
        return;
    }
    n -= y;
    if (n <= g)
    {
        cout << "G";
        return;
    }
    n -= g;
}

int main()
{
    solve();
    return 0;
}
