// https://www.e-olymp.com/ru/problems/10761
#include <bits/stdc++.h>
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
    int n;
    cin >> n;
    Dsu dsu(n + 1);
    vector<pair<int, pair<int, int>>> v(n - 1);
    for(auto &d : v) cin >> d.second.first >> d.second.second >> d.first;
    sort(begin(v), end(v), greater<>());

    ll ans = 0;
    for(auto d : v)
    {
        int a = d.second.first, b = d.second.second, c = d.first;
        ans += 1ll * c * dsu.size(a) * dsu.size(b);
        dsu.merge(a, b);
    }
    cout << ans;
}

int main()
{
    solve();
    return 0;
}
