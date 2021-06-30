// https://www.e-olymp.com/ru/problems/8360
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n + 1, vector<int>(m + 2, 0));
    vector<vector<int>> dp(n + 1, vector<int>(m + 2, 0));
    vector<vector<int>> parr(n + 1, vector<int>(m + 2, 0));
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> v[i][j];

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
        {
            int mx = max(dp[i - 1][j - 1], max(dp[i - 1][j], dp[i - 1][j + 1]));
            dp[i][j] = mx + v[i][j];
            if(mx == dp[i - 1][j - 1])
                parr[i][j] = j - 1;
            else if(mx == dp[i - 1][j])
                parr[i][j] = j;
            else parr[i][j] = j + 1;
        }

    int ans = -1, ind = -1;
    for(int i = 1; i <= m; i++)
        if(ans < dp[n][i])
            ans = dp[n][i], ind = i;

    for(int i = n - 1; i > 0; i--)
        ind = parr[i + 1][ind];

    cout << ind << " "	<< ans;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}