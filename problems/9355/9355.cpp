//https://www.e-olymp.com/ru/problems/9355
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int d(pair<int, int> p1, pair<int, int> p2)
{
    int res = abs(p2.first - p1.first) + abs(p2.second - p1.second);
    return res;
}

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(6);

    int n;
    cin >> n;
    pair<int, int> start = {0, 0};
    pair<int, int> finish = {n, 0};

    vector<pair<int, int>> run =
    {
        {1, 4},
        {1, -4},
        {-1, 4},
        {-1, -4},
        {4, 1},
        {4, -1},
        {-4, 1},
        {-4, -1}
    };

    set<pair<int, int>> used;
    queue<pair<ll, pair<int, int>>> q;

    used.insert(start);
    q.push({0, start});
    ll ans = 0;
    while(!q.empty())
    {
        auto cur = q.front();
        q.pop();

        pair<int, int> dot = cur.second;
        ll len = cur.first;


        if(dot == finish)
        {
            ans = len;
            break;
        }

        if(d(dot, finish) > 20)
        {
            if(dot.second > finish.second)
                used.insert({dot.first + 4, dot.second - 1}), q.push({len + 1, {dot.first + 4, dot.second - 1}});
            else
                used.insert({dot.first + 4, dot.second + 1}), q.push({len + 1, {dot.first + 4, dot.second + 1}});
            continue;
        }

        for(auto r : run)
        {
            pair<int, int> next = dot;
            next.first += r.first;
            next.second += r.second;
            if(d(dot, finish) + 8 >= d(next, finish) && !used.count(next))
                used.insert(next), q.push({len + 1, next});
        }
    }
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
    //string cur; int t; cin >> t; getline(cin,cur); while (t--) solve();

    return 0;
}