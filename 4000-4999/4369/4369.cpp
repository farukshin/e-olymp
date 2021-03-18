//https://www.e-olymp.com/ru/problems/4369
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

vector<set<int>> ss;
vector<int> v;
vector<int> dist;

void bfs()
{
    queue<pair<int, int>> q;

    dist.resize(ss.size(), INT_MAX);
    for(int i = 0; i < v.size(); i++)
        dist[v[i] - 1] = 0, q.push({v[i] - 1, 0});

    while(!q.empty())
    {
        auto cur = q.front();
        q.pop();
        int node = cur.first;
        int len = cur.second;

        for(auto chield : ss[cur.first])
            if(dist[chield] > len + 1)
                dist[chield] = len + 1, q.push({chield, len + 1});
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;

    ss.resize(n);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        ss[a].insert(b);
        ss[b].insert(a);
    }
    int k;
    cin >> k;
    v.resize(k);
    for(int i = 0; i < k; i++)
        cin >> v[i];

    bfs();
    int ans = 0, node = v[0];
    for(int i = 0; i < n; i++)
        if(dist[i] > ans && dist[i] != INT_MAX)
            ans = dist[i], node = i;
        else if(dist[i] == ans && i < node)
            node = i;
    cout << ans << "\n" << node + 1;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    return 0;
}