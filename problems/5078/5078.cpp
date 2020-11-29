//https://www.e-olymp.com/ru/problems/5078
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void ss_to_ms(vector<vector<int>>& ss, int& countNode, vector<vector<int>>& ms)
{
    ms.resize(countNode);
    for (int i = 0; i < countNode; i++)
        for (int j = 0; j < countNode; j++)
            ms[i].push_back(0);

    for (int i = 0; i < countNode; i++)
        for (int j = 0; j < ss[i].size(); j++)
            ms[i][ss[i][j]] = 1;
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
        ss[b].push_back(a);
    }

    bool success = true;
    for (int i = 0; i < n && success; i++)
        if (ss[i].size() != n - 1)
            success = false;

    cout << (success ? "YES" : "NO") << endl;



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
