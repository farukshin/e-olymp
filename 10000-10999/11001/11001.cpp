// https://www.eolymp.com/ru/problems/11001
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Dsu
{
    int n;
    vector<int> leader, rang, sz;

    Dsu(int _n) : leader(_n), rang(_n), sz(_n, 1)
    {
        iota(begin(leader), end(leader), 0);
    }

    int get(int v)
    {
        return v == leader[v] ? v : leader[v] = get(leader[v]);
    }

    int size(int v)
    {
        return sz[get(v)];
    }

    bool merge(int u, int v)
    {
        u = get(u), v = get(v);
        if (u == v)
        {
            return false;
        }
        if (rang[u] < rang[v])
        {
            swap(u, v);
        }
        leader[v] = u;
        sz[u] += sz[v];
        if (rang[u] == rang[v])
        {
            ++rang[u];
        }
        return true;
    }
};

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, pair<int, int>>> v(m);
    ll ans = 0;
    priority_queue<pair<int, int>> q;
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        a--, b--;
        v[i] = {c, {a, b}};
        q.push({-c, i});
    }
    Dsu dsu(n);
    while (!q.empty())
    {
        auto cur = q.top();
        q.pop();
        int cost = -cur.first;
        int a = v[cur.second].second.first;
        int b = v[cur.second].second.second;
        if (dsu.merge(a, b))
            ans += cost;
    }
    if (dsu.size(0) != n)
        cout << "IMPOSSIBLE";
    else
        cout << ans;
}

int main()
{
    solve();
    return 0;
}
