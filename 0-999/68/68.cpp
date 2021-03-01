//https://www.e-olymp.com/ru/problems/68
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

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(2);

    int n, l;
    cin >> n >> l;

    string s;
    getline( cin, s );


    vector<vector<int>> lines(l + 1);
    map<int, vector<int>> mp;
    map<pair<int, int>, int> station;
    map<int, pair<int, int>> rev;

    int k = 0;
    for(int line = 1; line <= l; line++)
    {
        int num;
        getline(cin, s);
        istringstream parse(s);
        while (parse >> num)
        {
            lines[line].push_back(num);
            mp[num].push_back(line), station[ {line, num}] = k;
            rev[k] = {line, num};
            k++;
        }
    }

    int countNode = station.size();
    vector<vector<pair<int, ll>>> ss(countNode);

    for(int line = 1; line <= l; line++)
        for(int i = 1; i < lines[line].size(); i++)
        {
            ss[station[ {line, lines[line][i]}]].push_back({station[{line, lines[line][i - 1]}], 2});
            ss[station[ {line, lines[line][i - 1]}]].push_back({station[{line, lines[line][i]}], 2});
            //printf("from {%d %d} to {%d %d} len=%d\n", line, lines[line][i], line, lines[line][i-1], 2);
        }


    for(auto d : mp)
        if(d.second.size() > 1)
        {
            auto num = d.first;
            for(int i = 0; i < d.second.size(); i++)
                for(int j = i + 1; j < d.second.size(); j++)
                {
                    ss[station[ {d.second[i], num}]].push_back({station[{d.second[j], num}], 1});
                    ss[station[ {d.second[j], num}]].push_back({station[{d.second[i], num}], 1});
                    //printf("from {%d %d} to {%d %d} len=%d\n", d.second[i], num, d.second[j], num, 1);
                }
        }


    for(int i = 0; i < ss.size(); i++)
    {
        //printf("{%d %d}:", rev[i].first, rev[i].second);
        for(int j = 0; j < ss[i].size(); j++);
        //printf(" {%d %d}", rev[ss[i][j].first].first, rev[ss[i][j].first].second);
        //printf("\n");
    }

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int start = station[ { b, a}];
    int finish = station[ { d, c}];
    //printf("start=%d finish=%d\n", start, finish);
    vector<ll> dist;
    vector<int> parrent;
    dejkstra(ss, countNode, start, dist, parrent);
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
    //int t;cin >> t;while (t--)solve();

    return 0;
}