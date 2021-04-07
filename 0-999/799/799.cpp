// https://www.e-olymp.com/ru/problems/799
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> dp(n + 2, vector<int>(3, 4000));
    dp[0][0] = 0;
    dp[1][0] = 0;

    for(int i = 2; i < n + 2; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        dp[i][0] = min(min(dp[i - 2][2], dp[i - 1][1]), dp[i - 1][0] + a);
        dp[i][1] = min(dp[i - 1][0] + b, dp[i - 1][2]);
        dp[i][2] = dp[i - 1][0] + c;
    }

    cout << dp[n + 1][0];
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin >> t; while(t--) solve();
    return 0;
}