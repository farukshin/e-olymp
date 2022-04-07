// https://www.e-olymp.com/ru/problems/1455
#include <bits/stdc++.h>
//#include <cstdio>
using namespace std;
typedef long long ll;
typedef long double ld;

struct edge
{
    int a, b, cost;
    edge(int _a, int _b, int _cost) { a = _a, b = _b, cost = _cost; };
};

int n, m;
vector<edge> e;
const int INF = 1000000000;

void FordBellman()
{
    vector<int> d(n);
    vector<int> p(n, -1);
    int x;
    for (int i = 0; i < n; ++i)
    {
        x = -1;
        for (int j = 0; j < m; ++j)
            if (d[e[j].b] > d[e[j].a] + e[j].cost)
            {
                d[e[j].b] = max(-INF, d[e[j].a] + e[j].cost);
                p[e[j].b] = e[j].a;
                x = e[j].b;
            }
    }

    if (x == -1)
        cout << "NO";
    else
    {
        int y = x;
        for (int i = 0; i < n; ++i)
            y = p[y];

        vector<int> path;
        for (int cur = y;; cur = p[cur])
        {
            path.push_back(cur);
            if (cur == y && path.size() > 1)
                break;
        }
        reverse(path.begin(), path.end());

        cout << "YES\n"
             << path.size() << "\n";
        for (size_t i = 0; i < path.size(); ++i)
            cout << path[i] + 1 << (i != path.size() - 1 ? " " : "");
    }
}

void solve()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            int cur;
            cin >> cur;
            if (i == j && cur == 0)
                continue;
            if (cur == 100000 || cur == -100000)
                continue;
            e.push_back(edge(i, j, cur));
        }
    m = e.size();
    FordBellman();
}

int main()
{
    solve();
    return 0;
}
