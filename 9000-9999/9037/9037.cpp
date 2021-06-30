// https://www.e-olymp.com/ru/problems/9037
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll mxNum(ll n)
{
    ll res = 0;
    while(n)
    {
        res = max(res, n % 10);
        n /= 10;
    }
    return res;
}

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;

    while(n)
    {
        n -= mxNum(n);
        ans++;
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(4);

    solve();
    //int t; cin >> t; while(t--) solve();
    return 0;
}