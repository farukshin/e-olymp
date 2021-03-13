//https://www.e-olymp.com/ru/problems/10050
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


int n;
vector<vector<pair<ll, int>>> ss;

pair<ll, int> bfs(int start)
{
    vector<bool> used(n, false);
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>> > q;
    used[start] = true;
    q.push({0, start});
    pair<ll, int> res;

    while(!q.empty())
    {
        auto cur = q.top();
        q.pop();

        int node = cur.second;
        ll len = cur.first;
        res = cur;

        for(auto chield : ss[node])
            if(!used[chield.second])
                used[chield.second] = true, q.push({chield.first + len, chield.second});
    }
    return res;
}

void solve()
{
    cin >> n;
    ss.resize(n);

    for(int i = 0; i < n - 1; i++)
    {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        --a, --b;
        ss[a].push_back({c, b});
        ss[b].push_back({c, a});
    }

    pair<ll, int> last = bfs(0);
    pair<ll, int> last2 = bfs(last.second);
    cout << last2.first << "\n" ;
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