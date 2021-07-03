// https://www.e-olymp.com/ru/problems/4439
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll binpow(ll a, ll n, ll m = LLONG_MAX)
{
    if (n == 0)
        return 1 % m;

    if (n % 2 == 1)
        return (binpow(a, n - 1, m) * a) % m;
    else
        return binpow((a * a) % m, n / 2, m);
}

void solve()
{
    ll x, n;
    cin >> x >> n;
    cout << binpow(x, n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(3);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}