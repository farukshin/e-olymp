// https://www.e-olymp.com/ru/problems/9036
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, mod = 1e9 + 7;
    cin >> n;
    ll dp[max(n + 1, 7)];

    dp[0] = 1;
    dp[1] = 1;
    dp[2] = dp[1] + 1;
    dp[3] = dp[1] + dp[2] + 1;
    dp[4] = dp[1] + dp[2] + dp[3] + 1;
    dp[5] = dp[1] + dp[2] + dp[3] + dp[4] + 1;
    dp[6] = dp[1] + dp[2] + dp[3] + dp[4] + dp[5] + 1;

    for(int i = 7; i <= n; i++)
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3] + dp[i - 4] + dp[i - 5] + dp[i - 6]) % mod;

    cout << dp[n];
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