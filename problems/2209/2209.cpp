//https://www.e-olymp.com/ru/problems/2209
//#tech_debt
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void dejkstra(const vector<vector<pair<int, ll>>>& ss, const int& countNode, const int& start, vector<ll>& dist) {

    dist.resize(countNode);
    fill(dist.begin(), dist.end(), LLONG_MAX);
    dist[start] = 0;

    //priority_queue< pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>> > q;
    priority_queue< pair<ll, int> > q;
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
            int to = chield.first, len = chield.second;
            if (dist[to] > dist[curNode] + len)
            {
                dist[to] = dist[curNode] + len;
                q.push({ dist[to], to });
            }
        }
    }
}

void solve()
{
    int n, u, d, i, j, l;
    cin >> n >> u >> d >> i >> j >> l;

    const int MAXARR = 1e6 + 1;

    vector<vector<pair<int, ll>>> ss(MAXARR);
    ss[1].push_back({ n, u * (n - 1) });

    int up = MAXARR, low = 0;

    for (int lift = 1; lift <= l; lift++)
    {
        int count, preFlo = 1;
        cin >> count;
        for (int flo = 1; flo <= count; flo++)
        {
            int cur;
            cin >> cur;
            ss[preFlo].push_back({ cur, i + j });
            if (cur > n && up > cur)
                up = cur;
            if (cur < n && low < cur)
                low = cur;
            preFlo = cur;
        }
    }

    if (low != 0)
        ss[low].push_back({ n, u * (n - low) });

    if (up != MAXARR)
        ss[up].push_back({ n, d * (up - n) });

    vector<ll> dist;
    dejkstra(ss, MAXARR, 1, dist);

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
