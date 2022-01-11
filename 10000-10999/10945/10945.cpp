// https://www.eolymp.com/ru/problems/10945
//#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
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

void solve()
{
    int n = 1e5 + 5, m;
    read(m);
    Dsu dsu(n);
    map<string, int> mp;
    for (int i = 0; i < m; i++)
    {
        string sa, sb;
        cin >> sa >> sb;
        if (!mp.count(sa))
            mp[sa] = mp.size();
        if (!mp.count(sb))
            mp[sb] = mp.size();
        int a = mp[sa], b = mp[sb];
        dsu.merge(a, b);
        int ans = dsu.size(a);
        print(ans, '\n');
    }
}

int main()
{
    int t;
    read(t);
    while (t--)
        solve();
    return 0;
}
