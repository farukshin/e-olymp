// https://www.e-olymp.com/ru/problems/2476
#include <bits/stdc++.h>
using namespace std;

struct Dsu
{
    int cnt;
    vector<int> leader, rang;

    Dsu(int _n): leader(_n), rang(_n)
    {
        iota(begin(leader), end(leader), 0);
    }

    int get(int v)
    {
        return v == leader[v] ? v : leader[v] = get(leader[v]);
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
        if (rang[u] == rang[v])
        {
            ++rang[u];
        }
        return true;
    }
};

int MAXARR = 102;
Dsu vmeste(MAXARR);
Dsu razn(MAXARR);

int n;
vector<int> v(MAXARR);
bool success = false;

bool check(int pos)
{
    for(int i = 0; i < pos; i++)
        if (vmeste.get(i) == vmeste.get(pos) && v[i] == v[pos])
            continue;
        else if(razn.get(i) == razn.get(pos) && v[i] == v[pos])
            return false;

    return true;
}

void backtracking(int pos)
{
    if(pos == n)
    {
        success = true;
        for(int i = 0; i < n; i++)
            printf("%d ", v[i] + 1);
    }

    v[pos] = 0;
    if(check(pos) && !success)
        backtracking(pos + 1);

    v[pos] = 1;
    if(check(pos) && !success)
        backtracking(pos + 1);
}

void solve()
{
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        --a, --b;
        vmeste.merge(a, b);
        razn.merge(i, a);
        razn.merge(i, b);
    }
    backtracking(0);
}

int main()
{
    solve();
    return 0;
}