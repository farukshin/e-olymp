// https://www.eolymp.com/ru/problems/10947
//#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <numeric>
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

template <typename T>
inline void read(T &f)
{
    f = 0;
    T fu = 1;
    char c = getchar();
    while (c < '0' || c > '9')
    {
        if (c == '-')
            fu = -1;
        c = getchar();
    }
    while (c >= '0' && c <= '9')
    {
        f = (f << 3) + (f << 1) + (c & 15);
        c = getchar();
    }
    f *= fu;
}

template <typename T>
void print(T x)
{
    if (x < 0)
        putchar('-'), x = -x;
    if (x < 10)
        putchar(x + 48);
    else
        print(x / 10), putchar(x % 10 + 48);
}

template <typename T>
void print(T x, char t)
{
    print(x);
    putchar(t);
}

int ans;

void solve()
{
    ans = 1;
    int n, m;
    read(n), read(m);
    Dsu dsu(n);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        read(a), read(b);
        --a, --b;
        if (dsu.merge(a, b))
            ans = max(ans, dsu.size(a));
    }
    print(ans, '\n');
}

int main()
{
    int t;
    read(t);
    while (t--)
        solve();
    return 0;
}
