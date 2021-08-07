// https://www.e-olymp.com/ru/problems/4283
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll n;
    cin >> n;
    ll ans {n};

    for(ll i = 2; i <= n; i++)
    {
        ll ii = i;
        while(ii <= n)
        {
            ans++;
            ii += i;
        }
    }
    cout << ans;
}

int main()
{
    cout.setf(std::ios::fixed);
    cout.precision(6);

    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}