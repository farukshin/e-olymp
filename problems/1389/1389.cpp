//https://www.e-olymp.com/ru/problems/1389
//#tech_debt
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void dejkstra(const vector<vector<tuple<int, int, int>>> &ss, const int &countNode, const int &start, vector<int> &dist, vector<int> &parrent)
{

    dist.resize(countNode, 1e4 + 5);
    dist[start] = 0;

    parrent.resize(countNode, -1);
    parrent[0] = 0;

    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> q;
    q.push({0, 0, start});

    while (!q.empty())
    {
        // int cur = q.top().second;
        // int curLen = q.top().first;
        int t2, t1, cur;
        [t2, t1, cur] = q.top();
        q.pop();

        if (t2 < dist[cur])
            continue;

        for (auto chield : ss[cur])
        {
            int to = chield.first;
            int len = chield.second;
            if (dist[to] > dist[cur] + len)
            {
                dist[to] = dist[cur] + len;
                q.push({dist[to], to});
                parrent[to] = cur;
            }
        }
    }
}

void solve()
{
    int n, start, finish;
    cin >> n >> start >> finish;
    --start, --finish;

    vector<vector<tuple<int, int, int>>> ss(n);
    vector<int> dist;
    vector<int> parrent;

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int a, t1, b, t2;
        cin >> a >> t1 >> b >> t2;
        --a, --b;
        ss[a].push_back({b, t1, t2});
        ss[b].push_back({a, t1, t2});
    }

    dejkstra(ss, n, start, dist, parrent);
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
