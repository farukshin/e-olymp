// https://www.e-olymp.com/ru/problems/1711
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int MAXARR = 10;
int n, s, t, ms[MAXARR][MAXARR];

int f[MAXARR][MAXARR], d[MAXARR], ptr[MAXARR], q[MAXARR];

bool bfs()
{
    int qh = 0, qt = 0;
    q[qt++] = s;
    memset (d, -1, n * sizeof d[0]);
    d[s] = 0;
    while (qh < qt)
    {
        int v = q[qh++];
        for (int to = 0; to < n; ++to)
            if (d[to] == -1 && f[v][to] < ms[v][to])
            {
                q[qt++] = to;
                d[to] = d[v] + 1;
            }
    }
    return d[t] != -1;
}

int dfs (int v, int flow)
{
    if (!flow)  return 0;
    if (v == t)  return flow;
    for (int & to = ptr[v]; to < n; ++to)
    {
        if (d[to] != d[v] + 1)  continue;
        int pushed = dfs (to, min (flow, ms[v][to] - f[v][to]));
        if (pushed)
        {
            f[v][to] += pushed;
            f[to][v] -= pushed;
            return pushed;
        }
    }
    return 0;
}

int dinic()
{
    int flow = 0;
    for (;;)
    {
        if (!bfs())  break;
        memset (ptr, 0, n * sizeof ptr[0]);
        while (int pushed = dfs (s, INT_MAX))
            flow += pushed;
    }
    return flow;
}

void solve()
{
    int m;
    cin >> n >> m;

    for(int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        --a, --b;
        ms[a][b] = c;
    }

    s = 0, t = n - 1;
    cout << dinic();
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