// https://www.e-olymp.com/ru/problems/4754
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll k;
    string s;
    ll ans = 0;
    cin >> k >> s;
    ll pw = 1;

    for(int i = s.size() - 1; i >= 0; i--)
        ans += ll(s[i] - '0') * pw, pw *= k;

    cout << ans;
}

int main()
{
    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}