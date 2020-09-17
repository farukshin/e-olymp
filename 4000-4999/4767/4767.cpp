//https://www.e-olymp.com/ru/problems/4767
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void sr_to_ms(vector<pair<int, int>> &sr, int &countNode, vector<vector<int>> &ms, bool orient = false)
{
    ms.resize(countNode);
    for (int i = 0; i < countNode; i++)
        for (int j = 0; j < countNode; j++)
            ms[i].push_back(0);

    for (auto r : sr)
    {
        ms[r.first][r.second] = 1;
        if (!orient)
            ms[r.second][r.first] = 1;
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> ms(n);
    vector<pair<int, int>> sr;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        sr.push_back({a, b});
    }

    sr_to_ms(sr, n, ms, true);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << ms[i][j] << " ";
        cout << endl;
    }
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
