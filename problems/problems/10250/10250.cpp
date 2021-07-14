// https://www.e-olymp.com/ru/problems/10250
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

map<ll, ll> mp;

ll check(ll n)
{
    if(mp.count(n))
        return mp[n];

    ll ans;
    if(n == 0)
        ans = 0;
    else if(n == 1)
        ans = 0;
    else if(n == 2)
        ans = 1;
    else if(n % 3 == 0)
        ans = check(n / 3) + 1;
    else if((n - 1) % 3 == 0)
        ans = min(check(n - 1) + 1, check(n + 2) + 2);
    else if((n + 1) % 3 == 0)
        ans = min(check(n + 1) + 1, check(n - 2) + 2);
    mp[n] = ans;
    return ans;
}

void solve()
{
    ll n;
    cin >> n;
    cout << check(n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}