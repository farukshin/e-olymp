// https://www.e-olymp.com/ru/problems/10116
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n, m, start, finish;
ll len;
vector<set<pair<int, ll>>> ss;
vector<ll> dist;

void dejkstra(const vector<set<pair<int, ll>>>& ss, const int& countNode, const int& start, vector<ll>& dist, vector<int>& parrent)
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

void bfs()
{
    queue<pair<pair<int, int>, pair<ll, ll>>> q;
    q.push({{finish, -1}, { len, 0 } });
    set<pair<int, int>> del;

    while(!q.empty())
    {
        auto dot = q.front();
        q.pop();

        int to = dot.first.first;
        int from = dot.first.second;
        ll curLen = dot.second.first;
        ll curPre = dot.second.second;
        if(to == start)
            continue;
        for(auto chield : ss[to])
        {
            int newTo = chield.first;
            if(newTo == from)
                continue;

            if(dist[newTo] + 1 + curPre == len)
            {
                del.insert({newTo, to});
                q.push({{newTo, to}, {curLen - 1, curPre + 1}});
            }
        }
    }

    for(auto d : del)
    {
        int a = d.first, b = d.second;
        ss[a].erase({b, 1});
        ss[b].erase({a, 1});
    }
}

void solve()
{
    cin >> n >> m >> start >> finish;
    --start, --finish;

    ss.resize(n);
    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        ss[a].insert({b, 1});
        ss[b].insert({a, 1});
    }

    vector<int> parrent;
    dejkstra(ss, n, start, dist, parrent);

    len = dist[finish];
    bfs();
    dejkstra(ss, n, start, dist, parrent);
    cout << (dist[finish] == LLONG_MAX ? -1 : dist[finish]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}