// https://www.e-olymp.com/ru/problems/10205
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

vector<int> parent;
vector<int> rang;

void make_set (int v)
{
    parent[v] = v;
    rang[v] = 0;
}

void init (int n)
{
    parent.resize(n);
    rang.resize(n);
    for(int i = 0; i < n; i++)
        make_set(i);
}

int find_set (int v)
{
    if (v == parent[v])
        return v;
    return parent[v] = find_set (parent[v]);
}

void union_sets (int a, int b)
{
    a = find_set (a);
    b = find_set (b);
    if (a != b)
    {
        if (rang[a] < rang[b])
            swap (a, b);
        parent[b] = a;
        if (rang[a] == rang[b])
            ++rang[a];
    }
}

priority_queue<pair<ld, pair<int, int>>, vector<pair<ld, pair<int, int>>>, greater<pair<ld, pair<int, int>>> > q;
vector<pair<int, int>> v;

ld dist(int a, int b)
{
    ld res = sqrt((v[b].first - v[a].first) * (v[b].first - v[a].first) + (v[b].second - v[a].second) * (v[b].second - v[a].second));
    return res;
}

void solve()
{
    int n;
    cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;

    init(n);
    int m;
    cin >> m;
    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        union_sets(a, b);
    }

    bool success = false;
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if(find_set(i) != find_set(j))
                q.push({dist(i, j), {i, j}});

    while(!q.empty())
    {
        auto cur = q.top();
        q.pop();
        int a = cur.second.first;
        int b = cur.second.second;

        if(find_set(a) != find_set(b))
            union_sets(a, b), cout << a + 1 << " " << b + 1 << "\n", success = true;
    }
    if(!success)
        cout << "No new highways need\n";
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    //solve();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}