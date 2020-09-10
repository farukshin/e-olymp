//https://www.e-olymp.com/ru/problems/2209
//#tech_debt
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void dejkstra(const vector<vector<pair<int, int>>>& ss, const int& countNode, const int& start, vector<ll>& dist)
{

    dist.resize(countNode);
    fill(dist.begin(), dist.end(), LLONG_MAX);
    dist[start] = 0;

    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> q;
    //priority_queue<pair<ll, int>> q;
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

    int MAXFLOOR = 0;

    vector<vector<pair<int, int>>> ss;

    {
        vector<vector<int>> lift(l + 1);
        set<int> floors;

        for (int liftNumber = 1; liftNumber <= l; liftNumber++)
        {
            int countFlo;
            cin >> countFlo;
            while (countFlo--)
            {
                int floor;
                cin >> floor;
                lift[liftNumber].push_back(floor);
                floors.insert(floor);
                if (MAXFLOOR < floor)
                    MAXFLOOR = floor;
            }
        }

        set<pair<int, int>> stepStairs;

        floors.insert(1);
        floors.insert(n);

        int pre = 0;
        for (auto fl : floors)
        {
            if (pre != fl && pre != 0)
                stepStairs.insert({ pre, fl });
            pre = fl;
        }

        MAXFLOOR = max(MAXFLOOR, n) + 1;
        ss.resize(MAXFLOOR);
        for (auto step : stepStairs)
            if (step.first != step.second)
            {
                ss[step.first].push_back({ step.second, u * abs(step.second - step.first) });
                ss[step.second].push_back({ step.first, d * abs(step.second - step.first) });
            }

        set<pair<int, int>> stepLift;
        for (int liftNumber = 1; liftNumber <= l; liftNumber++)
            for (int floNumberFrom = 0; floNumberFrom < lift[liftNumber].size() - 1; floNumberFrom++)
                for (int floNumberTo = floNumberFrom + 1; floNumberTo < lift[liftNumber].size(); floNumberTo++)
                    stepLift.insert({ lift[liftNumber][floNumberFrom], lift[liftNumber][floNumberTo] });

        for (auto step : stepLift)
            if (step.first != step.second)
            {
                ss[step.first].push_back({ step.second, i + j });
                ss[step.second].push_back({ step.first, i + j });
            }

    }

    vector<ll> dist;
    dejkstra(ss, MAXFLOOR, 1, dist);

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
