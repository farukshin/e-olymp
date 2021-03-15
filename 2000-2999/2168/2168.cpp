//https://www.e-olymp.com/ru/problems/2168
#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> run =
{
    {0, 1},
    {0, -1},
    {1, 0},
    {-1, 0}
};

void dfs(int i, int j, const int &n, const int &m, vector<vector<bool>> & used)
{
    used[i][j] = true;
    for(auto r : run)
    {
        int a = i + r.first, b = j + r.second;
        if(a >= 0 && b >= 0 && a < n && b < m && !used[a][b])
            dfs(a, b, n, m, used);
    }
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n, m;
    cin >> n >> m;
    vector<vector<bool>> used(n, vector<bool>(m, false));

    vector<vector<int>> v(n, vector<int>(m));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            if(v[i][j] == 1)
                used[i][j] = true;
        }



    int ans = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(!used[i][j])
                dfs(i, j, n, m, used), ans++;
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