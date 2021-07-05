//https://www.e-olymp.com/ru/problems/4730
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

map<ll, ll> mp;

ll f(ll n)
{
    if(mp.count(n))
        return mp[n];
    ll res = f(n - 1) + f(n - 2);
    mp[n] = res;
    return mp[n];
}

void solve()
{
    mp[0] = 1;
    mp[1] = 1;

    ll n;
    cin >> n;
    cout << f(n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(6);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}