// https://www.e-olymp.com/ru/problems/10328
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<ll>> v(n + 1, vector<ll>(m + 1, LLONG_MIN));
    vector<vector<ll>> dp(n + 1, vector<ll>(m + 1, 0));

    dp[0][1] = 0, dp[1][0] = 0;
    for (int i = 1; i <= n; i++)
        for (int j = m; j >= 1; j--)
            cin >> v[i][j];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            dp[i][j] = v[i][j] + max(dp[i][j - 1], dp[i - 1][j]);

    cout << dp[n][m] << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}