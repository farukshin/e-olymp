//https://www.e-olymp.com/ru/problems/8348
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void dejkstra(const vector<vector<pair<int, ll>>>& ss, const int& countNode, const int& start, vector<ll>& dist, vector<int>& parrent)
{

    dist.resize(countNode, 1e9 + 5);
    dist[start] = 0;

    parrent.resize(countNode, -1);
    parrent[0] = 0;

    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> q;
    q.push({ 0, start });

    while (!q.empty())
    {
        int cur = q.top().second;
        ll curLen = q.top().first;
        q.pop();

        if (curLen < dist[cur])
            continue;

        for (auto chield : ss[cur])
        {
            int to = chield.first;
            ll len = chield.second;
            if (dist[to] > dist[cur] + len)
            {
                dist[to] = dist[cur] + len;
                q.push({ dist[to], to });
                parrent[to] = cur;
            }
        }
    }
}

void solve()
{
    int n, m, start, finish;
    cin >> n >> m >> start >> finish;
    --start, --finish;

    vector<vector<pair<int, ll>>> ss(n);
    vector<ll> dist;
    vector<int> parrent;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        ll d;
        cin >> a >> b >> d;
        --a, --b;
        ss[a].push_back({ b, d });
        ss[b].push_back({ a, d });
    }

    dejkstra(ss, n, start, dist, parrent);

    // for (auto s : dist)
    //     cout << s << " ";

    printf("%d\n", dist[finish]);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}
