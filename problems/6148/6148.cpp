// https://www.e-olymp.com/ru/problems/6148
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n, m;
vector<int> rx = {0, 1, 0, -1};
vector<int> ry = {1, 0, -1, 0};

void dfs(int i, int j, vector<vector<bool>>&v)
{
    v[i][j] = true;

    for(int a = 0; a < 4; a++)
    {
        int ii = i + rx[a];
        int jj = j + ry[a];
        if(ii >= 0 && ii < n && jj >= 0 && jj < m && !v[ii][jj])
            dfs(ii, jj, v);
    }
}

void solve()
{
    cin >> n >> m;

    vector<vector<bool>> v(n, vector<bool>(m, false));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            char cur;
            cin >> cur;
            v[i][j] = (cur == '0' ? true : false);
        }

    int ans = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(!v[i][j])
                ans++, dfs(i, j, v);
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}