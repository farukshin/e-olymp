//https://www.e-olymp.com/ru/problems/7818
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    ll dp[1105];
    dp[0] = 0;
    dp[1] = 4;
    for(int i = 2; i <= n + 100; i++)
    {
        dp[i] = dp[i - 1] + 4;
        if(i >= 10) dp[i] = min(dp[i], dp[i - 10] + 30);
        if(i >= 50) dp[i] = min(dp[i], dp[i - 50] + 125);
        if(i >= 100) dp[i] = min(dp[i], dp[i - 100] + 200);
    }
    ll ans = LLONG_MAX;
    for(int i = n; i <= n + 100; i++)
        ans = min(ans, dp[i]);
    cout << ans;
}

int main()
{
    //ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}