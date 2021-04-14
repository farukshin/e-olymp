// https://www.e-olymp.com/ru/problems/1704
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<ll>> dp(n + 1, vector<ll>(m + 1, 0));
    dp[1][0] = 1;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
    cout << dp[n][m];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}