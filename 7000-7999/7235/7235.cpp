// https://www.e-olymp.com/ru/problems/7235
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n + 1, vector<int>(m + 1));
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -10000));
    dp[0][0] = 0;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> v[i][j];

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            dp[i][j] = max(dp[i - 1][j], max(dp[i][j - 1], dp[i - 1][j - 1])) + v[i][j];

    if(dp[n][m] > 0)
        cout << "winner\n" << dp[n][m];
    else
        cout << "loser\n" << dp[n][m];


}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin >> t; while(t--) solve();
    return 0;
}