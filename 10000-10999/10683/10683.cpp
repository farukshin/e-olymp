// https://www.e-olymp.com/ru/problems/10683
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 1;
    for(ll i = 2; i <= n; i++)
        ans += i * i * i;
    cout << ans;
}

int main()
{
    solve();
    return 0;
}
