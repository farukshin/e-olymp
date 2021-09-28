// https://www.e-olymp.com/ru/problems/4104
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<vector<int>> ss;
vector<vector<int>> dp;
int n, k;
ll ans1 = 0, ans2 = 0;

void dfs1(int node, int par = -1)
{
    dp[node].resize(k + 1);
    dp[node][0] = 1;

    for(auto chield : ss[node])
        if(chield != par)
        {
            dfs1(chield, node);
            for(int i = 1; i <= k; i++)
                dp[node][i] += dp[chield][i - 1];
        }
}

void dfs2(int node, int par = -1)
{
    for(auto chield : ss[node])
    {
        if(chield == par) continue;
        dfs2(chield, node);
        for(int i = 1; i < k; i++)
            ans1 += 1ll * dp[chield][i - 1] * (dp[node][k - i] - dp[chield][k - i - 1]);
    }
    ans2 += dp[node][k];
}

void solve()
{
    cin >> n >> k;
    ss.resize(n);
    dp.resize(n);
    for(int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        ss[a].push_back(b);
        ss[b].push_back(a);
    }
    dfs1(0);
    dfs2(0);
    cout << ans1 / 2 + ans2;
}

int main()
{
    solve();
    return 0;
}
