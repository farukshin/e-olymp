// https://www.e-olymp.com/ru/problems/4020
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n + 1);
    vector<int> dp(n + 1);
    dp[0] = 0, v[0] = 0;

    for(int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i++)
    {
        int mn = INT_MAX;
        for(int h = 1; h <= k + 1; h++)
        {
            int ii = i - h;
            if(ii >= 0)
                mn = min(mn, dp[ii]);
        }
        dp[i] = v[i] + mn;
    }
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