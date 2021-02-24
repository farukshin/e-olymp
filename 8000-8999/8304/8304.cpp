//https://www.e-olymp.com/ru/problems/8304
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

map<pair<ll, ll>, ll> mp;

ll func(ll x, ll y)
{

    if (x <= 0 || y <= 0)
        return 0;

    if (mp.count({x, y}) > 0)
        return mp[ {x, y}];

    ll res = 0;
    if (x <= y)
        res = func(x - 1, y - 2) + func(x - 2, y - 1) + 2;
    else if (x > y)
        res = func(x - 2, y - 2) + 1;
    mp[ {x, y}] = res;
    return res;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    ll x, y;
    cin >> x >> y;
    ll ans = func(x, y);

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}