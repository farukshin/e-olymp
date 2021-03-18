// https://www.e-olymp.com/ru/problems/4819
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

vector<set<int>> ss;

int bfs(int start)
{
    vector<bool> used(ss.size(), false);
    used[start] = true;
    vector<int> dist(ss.size(), INT_MAX);
    dist[start] = 0;
    int ans = 0;

    queue<pair<int, int>> q;
    q.push({start, 0});

    while(!q.empty())
    {
        auto cur = q.front();
        q.pop();
        if(ans < cur.second)
            ans = cur.second;

        for(auto chield : ss[cur.first])
            if(!used[chield])
                used[chield] = true, q.push({chield, cur.second + 1});
    }
    return ans;
}

void solve()
{
    int n, m, finish;
    cin >> n >> m >> finish;
    --finish;

    ss.resize(n);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        ss[b].insert(a);
    }

    cout << bfs(finish);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    return 0;
}