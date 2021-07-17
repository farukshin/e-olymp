// https://www.e-olymp.com/ru/problems/1211
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

map<ll, ll> mp;
ll n, p, q;

ll f(ll n)
{
    if(mp.count(n))
        return mp[n];

    ll ans = f(n / p) + f(n / q);
    mp[n] = ans;
    return ans;
}

void solve()
{
    mp[0] = 1;
    cin >> n >> p >> q;
    cout << f(n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}