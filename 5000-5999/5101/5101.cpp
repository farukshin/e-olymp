// https://www.e-olymp.com/ru/problems/5101
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

void solve()
{
    const int mod = 9929;
    int n;
    cin >> n;
    vector<vector<ll>> dp1(n + 2, vector<ll>(n + 2)), dp2(n + 2, vector<ll>(n + 2));
    dp1[1][0] = 1;
    dp2[n + 1][n] = 1;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            dp1[i][j] = (dp1[i - 1][j] + dp1[i][j - 1]) % mod;

    for(int i = n; i >= 1; i--)
        for(int j = n; j >= 1; j--)
            dp2[i][j] = (dp2[i + 1][j] + dp2[i][j + 1]) % mod;

    ll ans = 0;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
        {
            ans += dp1[i][j] * dp2[i][j];
            ans %= mod;
        }
    cout << ans;
}

int main()
{
    solve();
    return 0;
}
