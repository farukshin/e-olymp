// https://www.e-olymp.com/ru/problems/998
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n, m;

vector<vector<int>> v;
vector<vector<int>> ans;

int runx[4]	= {0, 1, 0, -1};
int runy[4]	= {1, 0, -1, 0};

void bfs(int x, int y)
{
    ans[x][y] = 0;
    queue<pair<int, pair<int, int>>> q;
    q.push({0, {x, y}});

    while(!q.empty())
    {
        auto cur = q.front();
        q.pop();

        int len = cur.first;
        int a = cur.second.first;
        int b = cur.second.second;

        for(int i = 0; i < 4; i++)
        {
            int aa = a + runx[i];
            int bb = b + runy[i];
            if(aa >= 0 && aa < n && bb >= 0 && bb < m && ans[aa][bb] > len + 1)
                ans[aa][bb] = len + 1, q.push({len + 1, {aa, bb}});
        }
    }
}

void solve()
{
    cin >> n >> m;

    v.resize(n, vector<int>(m));
    ans.resize(n, vector<int>(m, INT_MAX));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> v[i][j];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(v[i][j] == 1)
                bfs(i, j);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cout << ans[i][j] << " ";
        cout << "\n";
    }


}

int main()
{
    //cout.setf(std::ios::fixed); //cout.precision(2);
    solve();
    // int t; cin >> t; while (t--) solve();
    return 0;
}