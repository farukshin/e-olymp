//https://www.e-olymp.com/ru/problems/1109
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void dejkstra(const vector<vector<pair<int, double>>>& ss, const int& countNode, const int& start, vector<double>& dist, vector<int>& parrent)
{

    dist.resize(countNode, 0);
    dist[start] = 1.0;

    parrent.resize(countNode, -1);
    parrent[0] = 0;

    priority_queue<pair<double, int>> q;
    q.push({ 1.0, start });

    while (!q.empty())
    {
        auto u = q.top();
        q.pop();
        int cur = u.second;
        double curLen = u.first;
        if (curLen > dist[cur])
            continue;

        for (auto chield : ss[cur])
        {
            int to = chield.first;
            double len = chield.second;
            if (dist[to] < dist[cur] * len)
            {
                dist[to] = dist[cur] * len;
                q.push({ dist[to], to });
                parrent[to] = cur;
            }
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, double>>> ss(n);
    vector<double> dist;
    vector<int> parrent;

    for (int i = 0; i < m; i++)
    {
        int a, b, p;
        cin >> a >> b >> p;
        --a, --b;
        double d = 1.0 * p / 100;
        ss[a].push_back({ b, d });
        ss[b].push_back({ a, d });
    }

    int start = 0;
    dejkstra(ss, n, start, dist, parrent);

    printf("%f percent\n", dist[n - 1] * 100);
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
