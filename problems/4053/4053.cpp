// https://www.e-olymp.com/ru/problems/4053
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int runx[2] = {-1, -2};
int runy[2] = {-2, -1};

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<ll>> v(n, vector<ll>(m, 0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> v[i][j];

    vector<vector<ll>> dp(n, vector<ll>(m, 0));
    dp[0][0] = v[0][0];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            vector<ll> ans(2, 0);
            for(int k = 0; k < 2; k++)
            {
                int ii = i + runx[k];
                int jj = j + runy[k];
                if(ii >= 0 && ii < n && jj >= 0 && jj < m && dp[ii][jj])
                    ans[k] = dp[ii][jj];
            }
            if(ans[0] || ans[1])
                dp[i][j] = v[i][j] + max(ans[0], ans[1]);
        }

    cout << (!dp[n - 1][m - 1] ? -1 : dp[n - 1][m - 1]);
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