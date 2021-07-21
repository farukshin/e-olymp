// https://www.e-olymp.com/ru/problems/3124
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int MAXARR = 500;

int n, m, d;
pair<int, int> start;
string v[MAXARR];
int dist[MAXARR][MAXARR];

int runX[4] = {0, 1, 0, -1};
int runY[4] = {1, 0, -1, 0};

int bfs()
{
    priority_queue<pair<int, pair<int, int>>> q;
    q.push({0, start});
    dist[start.first][start.second] = 0;

    while(!q.empty())
    {
        auto cur = q.top();
        int len = -1 * (cur.first);
        auto curNode = cur.second;
        q.pop();

        int a = curNode.first;
        int b = curNode.second;
        if(a == 0 || a == n - 1 || b == 0 || b == m - 1)
            return len + 1;

        for(int i = 0; i < 4; i++)
        {
            int aa = a + runX[i];
            int bb = b + runY[i];
            bool isArea = aa >= 0 && aa < n && bb >= 0 && bb < m;
            if(!isArea)
                continue;

            if(v[aa][bb] == '.' && dist[aa][bb] > len + 1)
                dist[aa][bb] = len + 1, q.push({-1 * (len + 1), {aa, bb}});
            else if(v[aa][bb] == '@' && dist[aa][bb] > len + d + 1)
                dist[aa][bb] = len + d + 1, q.push({-1 * (len + d + 1), {aa, bb}});
        }
    }
    return -1;
}

void solve()
{
    cin >> n >> m >> d;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        for(int j = 0; j < m; j++)
            if(v[i][j] == 'S')
                start = {i, j};
    }
    fill(&dist[0][0], &dist[0][0] + MAXARR * MAXARR, INT_MAX);
    cout << bfs() << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(3);

    //solve();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}