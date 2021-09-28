// https://www.e-olymp.com/ru/problems/5135
#include <cstdio>
#include <vector>
using namespace std;


struct Dsu
{
    int n;
    vector<int> leader, rang, sz;

    Dsu(int _n): leader(_n), rang(_n), sz(_n, 1)
    {
        for(int i = 0; i < _n; i++) leader[i] = i;
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
    scanf("%d %d", &n, &m);

    Dsu dsu(n);
    for(int i = 0; i < m; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        dsu.merge(--a, --b);
    }
    vector<pair<int, int>> v;
    int start = 0;
    for(int i = 1; i < n; i++)
        if(dsu.merge(start, i))
            v.push_back({start + 1, i + 1});

    printf("%d\n", v.size());
    for(auto d : v)
        printf("%d %d\n", d.first, d.second);
}

int main()
{
    solve();
    return 0;
}
