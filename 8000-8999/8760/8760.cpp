//https://www.e-olymp.com/ru/problems/8760
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void dfs(int node, vector<vector<int>>& ss, vector<bool> &used)
{
    used[node] = true;
    cout << node + 1 << " ";
    for(auto chield : ss[node])
        if(!used[chield])
            dfs(chield, ss, used);
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> ss(n);
    vector<bool> used(n, false);
    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        ss[a].push_back(b);
        ss[b].push_back(a);
    }

    int start;
    cin >> start;
    --start;
    dfs(start, ss, used);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}