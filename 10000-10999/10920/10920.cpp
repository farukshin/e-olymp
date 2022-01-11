// https://www.eolymp.com/ru/problems/10920
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<ll> v(n);
    for (auto &d : v)
        cin >> d;
    vector<vector<int>> ss(n);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        ss[a].push_back(b);
        ss[b].push_back(a);
    }
    int start, finish;
    cin >> start >> finish;
    --start, --finish;

    queue<pair<ll, int>> q;
    vector<ll> dist(n, LLONG_MAX);
    dist[start] = v[start];
    q.push({dist[start], start});

    while (!q.empty())
    {
        ll len = q.front().first;
        int node = q.front().second;
        q.pop();

        if (dist[node] < len)
            continue;

        for (auto chield : ss[node])
            if (dist[chield] > (len + v[chield]))
                dist[chield] = len + v[chield], q.push({len + v[chield], chield});
    }
    cout << (dist[finish] == LLONG_MAX ? -1 : dist[finish]);
}

int main()
{
    solve();
    return 0;
}
