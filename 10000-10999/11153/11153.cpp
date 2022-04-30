// https://www.eolymp.com/ru/problems/11153
#include <cstdio>
//#include <iostream>
#include <vector>
//#include <algorithm>
//#include <numeric>
using namespace std;

int n, m, ans = 0;
vector<int> fl(1e5 + 5);
vector<vector<int>> ss(1e5 + 5);

void dfs(int node, int par, int curcnt)
{
    curcnt = (fl[node] ? curcnt + fl[node] : 0);
    if (curcnt > m)
        return;
    else if (int(ss[node].size()) == 1 && node != 0)
        ans++;

    for (auto chield : ss[node])
    {
        if (chield == par)
            continue;
        dfs(chield, node, curcnt);
    }
}

void solve()
{
    scanf("%d %d\n", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%d", &fl[i]);
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        scanf("%d %d\n", &a, &b);
        --a, --b;
        ss[a].push_back(b);
        ss[b].push_back(a);
    }
    dfs(0, -1, 0);
    printf("%d", ans);
}

int main()
{
    solve();
    return 0;
}
