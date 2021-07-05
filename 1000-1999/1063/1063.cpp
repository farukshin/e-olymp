// https://www.e-olymp.com/ru/problems/1063
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n, m;
vector<vector<char>> v;
vector<vector<bool>> used;

int runx[4] = {0, 1, 0, -1};
int runy[4] = {1, 0, -1, 0};

void bfs(int a, int b)
{
    queue<pair<int, int>> q;
    used[a][b] = true;
    q.push({a, b});

    while(!q.empty())
    {
        auto cur = q.front();
        q.pop();
        int i = cur.first;
        int j = cur.second;

        for(int k = 0; k < 4; k++)
        {
            int ii = i + runx[k];
            int jj = j + runy[k];
            if(ii >= 0 && ii < n && jj >= 0 && jj < m && !used[ii][jj] && v[ii][jj] == '#')
                used[ii][jj] = true, q.push({ii, jj});
        }
    }
}

void solve()
{
    cin >> n >> m;
    int ans = 0;
    v.resize(n, vector<char>(m));
    used.resize(n, vector<bool>(m, false));

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> v[i][j], used[i][j] = (v[i][j] == '.');

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(v[i][j] == '#' && !used[i][j])
                ans++, bfs(i, j);

    cout << ans;
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