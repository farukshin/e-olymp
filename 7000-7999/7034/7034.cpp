// https://www.e-olymp.com/ru/problems/7034
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <numeric>


using namespace std;
typedef long long ll;

struct Dsu
{
    int n;
    vector<int> leader, rang, sz;

    Dsu(int _n): leader(_n), rang(_n), sz(_n, 1)
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
    vector<ll> v(n);
    for(auto &d : v) cin >> d;

    Dsu dsu(n);
    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        dsu.merge(--a, --b);
    }

    priority_queue<pair<ll, pair<int, int>>> q;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < i; j++)
            if(dsu.get(i) != dsu.get(j))
                q.push({-v[i] - v[j], {i, j}});

    ll ans = 0;
    while(!q.empty())
    {
        auto d = q.top();
        q.pop();
        if(dsu.merge(d.second.first, d.second.second))
            ans -= d.first;
    }

    cout << ans;
}

int main()
{
    solve();
    return 0;
}
