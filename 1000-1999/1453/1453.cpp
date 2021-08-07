//https://www.e-olymp.com/ru/problems/1453
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

struct edge
{
    int a, b, cost;
};

int n, m, start = 0;
vector<edge> e;
vector<int> dist(105, INT_MAX);

void FordBellmanNotNegativCycle()
{
    dist[start] = 0;
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < m; ++j)
            if (dist[e[j].a] < INT_MAX)
                dist[e[j].b] = min (dist[e[j].b], dist[e[j].a] + e[j].cost);
}

void solve()
{
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        edge cur;
        cin >> cur.a >> cur.b >> cur.cost;
        --cur.a, --cur.b;
        e.push_back(cur);
    }
    FordBellmanNotNegativCycle();
    for(int i = 0; i < n; i++)
        cout << (dist[i] == INT_MAX ? 30000 : dist[i]) << " ";
}

int main()
{
    //cout.setf(std::ios::fixed); cout.precision(6);
    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}