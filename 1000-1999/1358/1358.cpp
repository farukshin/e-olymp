// https://www.e-olymp.com/ru/problems/1358
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

map<ll, ll> mp;
map<ll, int> mmp;

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

    int k;
    cin >> k;
    ll mx = -1, ans = 0;
    for(int i = 0; i < k; i++)
    {
        ll cur;
        cin >> cur;
        mmp[cur]++;
        mx = max(mx, cur);
    }

    for(int i = 1;; i++)
    {
        ll fib = f(i);
        if(mmp.count(fib))
            ans += mmp[fib];
        if(fib > mx)
            break;
    }
    cout << ans;
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