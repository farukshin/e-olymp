//https://www.e-olymp.com/ru/problems/1109
//#tech_debt
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void dejkstra(const vector<vector<pair<int, ll>>>& ss, const int& countNode, const int& start, vector<ll>& dist, vector<int>& parrent) {

    dist.resize(countNode, 0);
    dist[start] = 1;

    parrent.resize(countNode, -1);
    parrent[0] = 0;

    priority_queue< pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> q;
    q.push(make_pair(0, start));

    while (!q.empty())
    {
        auto u = q.top();
        q.pop();
        int cur = u.second;
        if (u.first < dist[cur])
            continue;

        for (auto chield : ss[cur])
        {
            int to = chield.first;
            ll len = chield.second;
            if (dist[to] < dist[cur] * len)
            {
                dist[to] = dist[cur] * len;
                q.push(make_pair(dist[to], to));
                parrent[to] = cur;
            }
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, ll>>> ss(n);
    vector<ll> dist;
    vector<int> parrent;

    for (int i = 0; i < m; i++)
    {
        int a, b, p;
        cin >> a >> b >> p;
        --a, --b;
        ss[a].push_back({ b, p / 100 });
        ss[b].push_back({ a, p / 100 });
    }

    int start = 0;
    dejkstra(ss, n, start, dist, parrent);

    cout << dist[n] << endl;
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
