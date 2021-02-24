//https://www.e-olymp.com/ru/problems/1948
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void dfs(const int node, vector<vector<int>>& ss, vector<int>& color, vector<int>& ans, bool& success)
{
    color[node] = 1;
    for (auto chield : ss[node])
    {
        if (color[chield] == 1)
            success = false;

        if (color[chield] == 0)
            dfs(chield, ss, color, ans, success);
    }
    color[node] = 2;
    ans.push_back(node);
}

void topologicSort(vector<vector<int>>& ss, vector<int>& ans, bool& success)
{
    auto n = ss.size();
    ans.clear();
    fill(ans.begin(), ans.end(), -1);
    success = true;

    vector<int> color(n, 0);

    for (int i = 0; i < n && success; i++)
        if (!color[i])
            dfs(i, ss, color, ans, success);

    reverse(ans.begin(), ans.end());
}

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> ss(n);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        ss[a].push_back(b);
    }

    vector<int> ans(n);
    bool success;
    topologicSort(ss, ans, success);

    if (!success)
    {
        cout << -1 << endl;
        return;
    }

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] + 1 << " ";
    cout << endl;
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
