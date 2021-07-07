// https://www.e-olymp.com/ru/problems/115
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;

    vector<int> dp(max(3, n + 1));
    dp[0] = 0;
    dp[1] = 2;
    dp[2] = 4;
    for(int i = 3; i <= n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];
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