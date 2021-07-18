// https://www.e-olymp.com/ru/problems/2293
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll factorial(ll b, ll a = 1, ll mod = 0)
{
    ll ans = 1;
    for(ll i = a; i <= b; i++)
        if(mod == 0) ans *= i;
        else ans = (ans * i) % mod;
    return ans;
}



ll combination(ll k, ll n, ll mod = 0)
{
    map<ll, int> mp;

    for(ll i = 1; i <= n; i++)
        mp[i]++;
    for(ll i = 1; i <= (n - k); i++)
        mp[i]--;
    for(ll i = 1; i <= k; i++)
        mp[i]--;

    ll ans = 1;
    ll ans2 = 1;
    for(auto d : mp)
        if(d.second > 0)
            ans *= d.first;
    for(auto d : mp)
        if(d.second < 0)
            ans2 *= d.first;
    return ans / ans2;
    //return factorial(n,1,mod) / (factorial(n-k,1,mod) * factorial(k,1,mod));
}

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    for(ll i = 3; i <= n; i = i + 2)
        ans += combination(i, n, LLONG_MAX);
    cout << ans;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //cin>>t; while(t--){solve();}
    return 0;
}