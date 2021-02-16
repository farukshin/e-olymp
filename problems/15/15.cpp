//https://www.e-olymp.com/ru/problems/15
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(4);

    int n, m;
    cin >> n >> m;

    vector<vector<ll>> v(n + 2, vector<ll>(m + 2, 0)), dp(n + 2, vector<ll>(m + 2, 0));

    for (int i = 1;i <= n;i++)
        for (int j = 1;j <= m;j++)
            cin >> v[i][j];

    for (int i = n;i >= 1;i--)
        for (int j = 1;j <= m;j++)
            dp[i][j] = v[i][j] + max(dp[i + 1][j], dp[i][j - 1]);


    // for (int i = 0;i < n + 2;i++)
    // {
    //     for (int j = 0;j < m + 2;j++)
    //         cout << dp[i][j] << " ";
    //     cout << endl;
    // }

    // cout << dp[1][m] << endl;

    int i = 1, j = m;
    string ans = "";
    while (true)
    {
        ll left = dp[i][j - 1], down = dp[i + 1][j];
        if (left > down)
            j--, ans += 'R';
        else if (left < down)
            i++, ans += 'F';
        else if (left == down)
        {
            if (j > 1)
                j--, ans += 'R';
            else
                i++, ans += 'F';
        }

        if (i == n && j == 1)
            break;
    }

    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}