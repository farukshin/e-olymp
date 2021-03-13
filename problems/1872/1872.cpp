//https://www.e-olymp.com/ru/problems/1872
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(9);

    int n;
    cin >> n;

    int dp[n + 1][2];

    int  k = 0;
    dp[k][1] = 0;
    dp[k][0] = -1;
    k++;

    int t, m;
    ll ans = 0;

    for( int i = 0 ; i < n ; i++ )
    {
        cin >> t >> m;
        if(m == 0)
        {
            dp[k][1] = dp[ dp[t][0] ][1];
            dp[k][0] = dp[ dp[t][0] ][0];
        }
        else
        {
            dp[k][1] = dp[t][1] + m;
            dp[k][0] = t;
        }
        ans += dp[k][1];
        k++;
    }
    cout << ans << "\n";

}

int main()
{
    //ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}