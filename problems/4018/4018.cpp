//https://www.e-olymp.com/ru/problems/4018
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n, m;
    cin >> n >> m;
    int arr[n + 1][m + 1], dp[n + 1][m + 1];
    memset(arr, 1e6, sizeof(arr));
    memset(dp, 1e6, sizeof(dp));

    dp[0][1] = 0, dp[1][0] = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> arr[i][j];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            dp[i][j] = arr[i][j] + min(dp[i][j - 1], dp[i - 1][j]);

    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= m; j++)
    //         cout << dp[i][j] << " ";
    //     cout << endl;
    // }

    cout << dp[n][m] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}