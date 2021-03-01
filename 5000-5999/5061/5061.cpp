//https://www.e-olymp.com/ru/problems/5061
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;
    vector<vector<int>> v(n + 2, vector<int>(n + 2, 0));
    vector<vector<int>> dp(n + 2, vector<int>(n + 2, 0));

    for(int i = 1; i < n + 1; i++)
        for(int j = 1; j < n + 1; j++)
            cin >> v[i][j];

    for(int i = 1; i < n + 1; i++)
        for(int j = 1; j < n + 1; j++)
            dp[i][j] = v[i][j] + max(dp[i - 1][j], dp[i][j - 1]);

    cout << dp[n][n] << endl;
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