// https://www.e-olymp.com/ru/problems/973
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<vector<int>> ss;
vector<int> dp1, dp2, cost;

void dfs(int node, int par = -1)
{
    dp1[node] = cost[node];
    dp2[node] = 0;

    for(auto chield : ss[node])
    {
        if(chield == par) continue;
        dfs(chield, node);
        dp1[node] += dp2[chield];
        dp2[node] += max(dp1[chield], dp2[chield]);
    }
}

void solve()
{
    int n;
    cin >> n;
    dp1.resize(n + 5);
    dp2.resize(n + 5);
    ss.resize(n + 5);

    for(int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        ss[a].push_back(b);
        ss[b].push_back(a);
    }

    cost.resize(n + 5);
    for(int i = 0; i < n; i++)
        cin >> cost[i];

    dfs(0);
    cout << max(dp1[0], dp2[0]);
}

int main()
{
    solve();
    return 0;
}
