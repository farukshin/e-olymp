//https://www.e-olymp.com/ru/problems/8609
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll sig(ll x)
{
    ll res = 0;
    if (x == 0)
        res = 0;
    else if (x > 0)
        res = sig(x - 1) + x;
    return res;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(1);
    ll n;
    cin >> n;

    cout << sig(n) << endl;
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