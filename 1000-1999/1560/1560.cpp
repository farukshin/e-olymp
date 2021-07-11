// https://www.e-olymp.com/ru/problems/1560
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;

    while(cin >> n)
    {
        vector<int> dp(n + 1, INT_MAX);
        dp[n] = 0;
        dp[1] = 0;

        for(int i = n - 1; i >= 1; i--)
        {
            int d1 = dp[i + 1] + 1;
            int d2 = (i * 3 <= n ? dp[i * 3] + 1 : INT_MAX);
            int d3 = (i * 2 <= n ? dp[i * 2] + 1 : INT_MAX);
            dp[i] = min(d1, min(d2, d3));
        }
        cout << dp[1] << "\n";
    }
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