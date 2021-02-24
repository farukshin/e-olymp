//https://www.e-olymp.com/ru/problems/1106
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

const int MAXARR = 52;
int g[4 * MAXARR][4 * MAXARR], used[4 * MAXARR];
vector<string> graph;
int n, k;

int aug(int x, int t, int CurFlow)
{
    if (x == t)
        return CurFlow;

    if (used[x]++)
        return 0;

    for (int Flow, y = 0; y <= 4 * n + 1; y++)
    {
        if (g[x][y] > 0 && (Flow = aug(y, t, min(CurFlow, g[x][y]))))
        {
            g[x][y] -= Flow;
            g[y][x] += Flow;
            return Flow;
        }
    }
    return 0;
}

int canDance(int m)
{
    int i, j;
    for (i = 1; i <= n; i++)
        g[0][i] = g[3 * n + i][4 * n + 1] = m;

    for (i = 1; i <= n; i++)
        g[i][n + i] = g[2 * n + i][3 * n + i] = k;

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (graph[i][j] == 'Y')
                g[i + 1][3 * n + j + 1] = 1;
            else
                g[n + i + 1][2 * n + j + 1] = 1;

    int maxFlow = 0, flow;
    do
    {
        memset(used, 0, sizeof(used));
    }
    while ((flow = aug(0, 4 * n + 1, 0x7FFFFFFF)) && (maxFlow += flow));

    return maxFlow == m * n;
}

int binSearch(void)
{
    int mid, l = 0, r = n;
    while (l < r)
    {
        mid = (l + r + 1) / 2;
        if (canDance(mid))
            l = mid;
        else
            r = mid - 1;
    }
    return l;
}

void solve()
{
    cin >> n >> k;
    memset(g, 0, sizeof(g));
    graph.clear();

    string line;
    for (int i = 0; i < n; i++)
    {
        cin >> line;
        graph.push_back(line);
    }
    cout << binSearch() << endl;
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
