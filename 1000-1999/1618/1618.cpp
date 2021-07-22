// https://www.e-olymp.com/ru/problems/1618
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m;
    cin >> n;
    vector<int> v1(n, 0);
    for(int i = 0; i < n; i++)
        cin >> v1[i];
    cin >> m;
    vector<int> v2(m, 0);
    for(int i = 0; i < m; i++)
        cin >> v2[i];

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
        {
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            if(v1[i - 1] == v2[j - 1])
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
        }

    int ans = 0;
    for(int i = 0; i <= n; i++)
        for(int j = 0; j <= m; j++)
            ans = max(ans, dp[i][j]);
    cout << ans;
}

int main()
{
    //cout.setf(std::ios::fixed); //cout.precision(2);
    solve();
    // int t; cin >> t; while (t--) solve();
    return 0;
}