// https://www.e-olymp.com/ru/problems/4452
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

int n, m;
char v[505][505];
bool reserve[505][505];
int dist[505][505];
pair<int, int> start, finish;
set<pair<int, int>> ext;

int runX[4] = {0, 1, 0, -1};
int runY[4] = {1, 0, -1, 0};

bool isArea(int a, int b)
{
    return a >= 0 && a < n && b >= 0 && b < m;
}

void bfs()
{
    queue<pair<pair<int, int>, int>> q;
    q.push({start, 0});
    dist[start.first][start.second] = 0;

    while(!q.empty())
    {
        auto cur = q.front();
        q.pop();
        auto a = cur.first.first;
        auto b = cur.first.second;
        auto len = cur.second;

        for(int i = 0; i < 4; i++)
        {
            int aa = a, bb = b;
            do
            {
                aa += runX[i], bb += runY[i];
                if(ext.count({aa, bb}) != 0 && dist[aa][bb] > len + 1)
                    dist[aa][bb] = len + 1;
            }
            while(isArea(aa, bb) && !reserve[aa][bb]);

            aa -= runX[i], bb -= runY[i];

            if((aa != a || bb != b) && dist[aa][bb] > len + 1)
                dist[aa][bb] = len + 1, q.push({{aa, bb}, len + 1});
        }
    }
}

void solve()
{
    cin >> n >> m;
    start = {0, 0};
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            if(v[i][j] == '2')
                ext.insert({i, j});

            dist[i][j] = INT_MAX;
            reserve[i][j] = (v[i][j] == '1' ? true : false);
        }
    bfs();
    int ans = INT_MAX;
    for(auto e : ext)
        if(ans > dist[e.first][e.second])
            // {
            // 	ans = dist[e.first][e.second];
            // 	cout<<e.first<<" "<<e.second<<" dist="<< dist[e.first][e.second] <<"\n";
            // }
            ans = min(ans, dist[e.first][e.second]);
    cout << (ans == INT_MAX ? -1 : ans);

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(2);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}