// https://www.e-olymp.com/ru/problems/122
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n, m, start, finish, d;
ll ans = 0;
vector<vector<int>> ss;
vector<int> color;

void dfs(int node, int len)
{
    if(node == finish && len <= d)
    {
        ans++;
        return;
    }
    if(len > d) return;

    color[node] = 1;
    for(auto chield : ss[node])
        if(color[chield] == 0 || color[chield] == 2)
            dfs(chield, len + 1);

    color[node] = 2;
}

void solve()
{

    cin >> n >> m >> start >> finish >> d;
    --start, --finish;

    ss.resize(n);
    color.resize(n);

    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        ss[a].push_back(b);
    }

    dfs(start, 0);
    cout << ans;

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    return 0;
}