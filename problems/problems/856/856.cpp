// https://www.e-olymp.com/ru/problems/856
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int runx[4] = {0, -1, 0, 1};
int runy[4] = {-1, 0, 1, 0};

void solve()
{
    const int MAXARR = 105;
    const int MAXK = 2005;
    int n, k;
    cin >> n >> k;
    k--;
    int v[MAXARR][MAXARR] = {0};
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> v[i][j];

    int dp[MAXARR][MAXARR][MAXK] = {0};
    dp[0][0][0] = dp[0][0][1] = v[0][0];

    for(int kk = 1; kk <= k; kk++)
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                for(int rr = 0; rr < 4; rr++)
                {
                    int ii = i + runx[rr];
                    int jj = j + runy[rr];
                    if(ii >= 0 && ii < n && jj >= 0 && jj < n && kk >= (i + j))
                        dp[i][j][kk] = max( dp[i][j][kk], dp[ii][jj][kk - 1] + v[i][j]);
                }

    int ans = 0;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            ans = max(ans, dp[i][j][k]);
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(1);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}