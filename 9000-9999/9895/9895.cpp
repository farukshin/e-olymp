// https://www.e-olymp.com/ru/problems/9895
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll a, b, k;
    cin >> a >> b >> k;
    ll ans = a + (k - 1) * (b - a);
    cout << ans;
}

int main()
{
    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}