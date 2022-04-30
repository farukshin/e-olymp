// https://www.eolymp.com/ru/problems/11000
#include <cstdio>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

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
    int n, m, mx = 1;
    scanf("%d %d\n", &n, &m);
    int cnt = n;
    Dsu dsu(n);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        scanf("%d %d\n", &a, &b);
        --a, --b;
        if (dsu.get(a) != dsu.get(b))
        {
            cnt--;
            mx = max(mx, dsu.size(a) + dsu.size(b));
            dsu.merge(a, b);
        }
        printf("%d %d\n", cnt, mx);
    }
}

int main()
{
    solve();
    return 0;
}
