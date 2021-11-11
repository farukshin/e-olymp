// https://www.e-olymp.com/ru/problems/5668
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
    ll s;
    cin >> n >> m >> s;
    vector<pair<pair<ll, int>, pair<int, int>>> v(m), nv;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        --a, --b;
        v[i] = {{c, i}, {a, b}};
    }

    Dsu dsu(n);
    sort(begin(v), end(v));
    for (int i = m - 1; i >= 0; i--)
    {
        ll cost = v[i].first.first;
        int a = v[i].second.first;
        int b = v[i].second.second;
        if (!dsu.merge(a, b))
            nv.push_back(v[i]);
    }
    vector<int> ans;
    sort(begin(nv), end(nv));
    for (int i = 0; i < nv.size(); i++)
        if (s >= nv[i].first.first)
            ans.push_back(nv[i].first.second), s -= nv[i].first.first;

    sort(begin(ans), end(ans));
    cout << ans.size() << "\n";
    for (auto d : ans)
        cout << d + 1 << " ";
}

int main()
{
    solve();
    return 0;
}
