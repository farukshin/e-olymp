// https://www.e-olymp.com/ru/problems/10296
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

map<ll, ll> mp;

ll f(ll n)
{
    if(mp.count(n))
        return mp[n];
    if(n == 0)
    {
        mp[0] = 1;
        return mp[n];
    }

    ll ans = f(n / 2) + f(n / 3);
    mp[n] = ans;
    return mp[n];
}

void solve()
{
    ll n;
    cin >> n;
    cout << f(n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}