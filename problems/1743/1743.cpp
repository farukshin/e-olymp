//https://www.e-olymp.com/ru/problems/1743
//#tech_debt
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

vector<vector<int>> ss;
vector<bool> used;

int dfs(int node, int parent, bool setRoad = false, bool otherRoad = false)
{
    for (int chield : ss[node])
        if (chield != parent)
        {
            if (otherRoad && used[chield])
                continue;
            dfs(chield, node, setRoad, otherRoad);
        }
}

void solve()
{
    int n;
    cin >> n;
    ss.resize(n + 1);
    used.resize(n + 1);
    int ans[3];

    for (int i = 1; i <= n; i++)
    {
        int k, cur;
        cin >> k;
        while (k--)
        {
            cin >> cur;
            ss[i].push_back(cur);
            ss[cur].push_back(i);
        }
    }
    ans[0] = dfs(1, -1);
    ans[1] = dfs(ans[0], -1, true);
    ans[2] = dfs(ans[0], -1, true);

    cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
