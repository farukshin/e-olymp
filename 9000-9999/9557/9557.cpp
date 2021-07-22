// https://www.e-olymp.com/ru/problems/9557
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

long binpow(long a, long n, long m)
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
    ll n;
    cin >> n;
    ll MOD = 1000 * 1000 * 1000 + 7;

    ll ans = binpow(n - 1, n - 1, MOD);
    ans = (ans * n) % MOD;
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(5);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}