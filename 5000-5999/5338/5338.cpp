//https://www.e-olymp.com/ru/problems/5338
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void dejkstra(const vector<vector<pair<int, ll>>>& ss, const int& countNode, const int& start, vector<ll>& dist, vector<int>& parrent)
{

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

void read_ss_from_ms(vector<vector<pair<int, ll>>>& ss, const int& n)
{

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            ll cur;
            cin >> cur;
            if (cur)
                ss[i].push_back({j, cur});
        }

}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;

    vector<vector<pair<int, ll>>> ss(n);
    read_ss_from_ms(ss, n);

    int start, finish;
    cin >> start >> finish;
    --start, --finish;

    vector<ll> dist;
    vector<int> parrent;
    dejkstra(ss, n, start, dist, parrent);
    cout << (dist[finish] == LLONG_MAX ? -1 : dist[finish]) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}