// https://www.e-olymp.com/ru/problems/139
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int a, b, c, d, n, k;
    cin >> a >> b >> c >> d >> n >> k;
    vector<int> dp(k + 1, 0);
    dp[0] = n;
    for(int i = 1; i <= k; i++)
        for(int ka = dp[i - 1] / a; ka >= 0; ka--)
        {
            int kb = (dp[i - 1] - ka * a) / b;
            dp[i] = max(dp[i], dp[i - 1] + ka * c + kb * d);
        }
    cout << dp[k];
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