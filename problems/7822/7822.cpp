// https://www.e-olymp.com/ru/problems/7822
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll n, cur;
    cin >> n;
    ll ans = (n + 1) * n / 2;

    for(ll i = 1; i <= n - 1; i++)
    {
        cin >> cur;
        ans -= cur;
    }
    cout << ans;
}

int main()
{
    solve();
    return 0;
}