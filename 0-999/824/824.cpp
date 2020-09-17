//https://www.e-olymp.com/ru/problems/824
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void dejkstra(const vector<vector<pair<int, ll>>> &ss, const int &countNode, const int &start, vector<ll> &dist, ll &ans)
{

    dist.resize(countNode);
    fill(dist.begin(), dist.end(), LLONG_MAX);
    dist[start] = 0;

    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> q;
    q.push({0, start});

    while (!q.empty())
    {
        auto u = q.top();
        q.pop();
        int cur = u.second;
        ll curLen = u.first;

        if (curLen > dist[cur])
            continue;

        for (auto chield : ss[cur])
        {
            int to = chield.first;
            ll len = chield.second;
            if (dist[to] > dist[cur] + len)
            {
                dist[to] = dist[cur] + len;
                q.push({dist[to], to});
                if (len > ans)
                    ans = len;
            }
        }
    }
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<vector<pair<int, ll>>> ss(n);

    ll ans = 0;
    for (int i = 0; i < k; i++)
    {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        --a, --b;
        ss[a].push_back({b, c});
        ss[b].push_back({a, c});
    }

    vector<ll> dist;
    dejkstra(ss, n, 0, dist, ans);
    cout << ans << endl;
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
