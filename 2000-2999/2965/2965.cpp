//https://www.e-olymp.com/ru/problems/2965
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void dejkstra(const vector<vector<pair<int, ll>>>& ss, const int& countNode, const int& start, vector<ll>& dist, vector<int>& parrent) {

    dist.resize(countNode);
    fill(dist.begin(), dist.end(), LLONG_MAX);
    dist[start] = 0;

    parrent.resize(countNode);
    fill(parrent.begin(), parrent.end(), -1);
    parrent[start] = -1;

    priority_queue< pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>> > q;
    //priority_queue< pair<ll, int> > q;
    q.push({ 0, start });

    while (!q.empty())
    {
        auto u = q.top();
        q.pop();
        int curNode = u.second;
        ll curLen = u.first;
        if (curLen > dist[curNode])
            continue;

        for (auto chield : ss[curNode])
        {
            int to = chield.first;
            ll len = chield.second;
            if (dist[to] > dist[curNode] + len)
            {
                dist[to] = dist[curNode] + len;
                q.push({ dist[to], to });
                parrent[to] = curNode;
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

    for (int i = 0; i < m;i++)
    {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        if (a == b)
            continue;
        --a, --b;
        ss[a].push_back({ b, c });
        ss[b].push_back({ a, c });
    }

    vector<ll> dist;
    vector<int> parrent;
    dejkstra(ss, n, start, dist, parrent);

    if (dist[finish] == LLONG_MAX)
    {
        cout << -1 << endl;
        return;
    }

    cout << dist[finish] << endl;

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
