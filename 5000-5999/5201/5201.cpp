// https://www.e-olymp.com/ru/problems/5201
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll f(ll x, ll mod)
{
    ll res = ((((x * x) % mod) * x * 132) % mod + (((77 * x) % mod) * x) % mod + (1345 * x) % mod + 1577) % mod;

    return res;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll mod = 1743;
    vector<ll> v(n);
    for(ll i = 1; i <= n; i++)
        v[i - 1] = f(i, mod);

    sort(v.begin(), v.end());
    cout << v[k - 1];
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}