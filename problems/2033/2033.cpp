// https://www.e-olymp.com/ru/problems/2033
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = INT_MAX;
    dp[2] = 1;
    dp[3] = INT_MAX;
    dp[4] = 2;
    dp[5] = 1;
    dp[6] = 3;
    dp[7] = 2;
    for(int i = 8; i <= n; i++)
        dp[i] = min(dp[i - 2], dp[i - 5]) + 1;


    cout << dp[n];
}

int main()
{
    //ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    // cout.setf(std::ios::fixed); cout.precision(2);
    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}