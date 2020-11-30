//https://www.e-olymp.com/ru/problems/5077
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> ms(n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            ms[i].push_back(0);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        ms[a][b] = 1;
        ms[b][a] = 1;
    }

    bool success = true;
    for (int i = 0; i < n && success; i++)
        for (int j = 0; j < n && success; j++)
            if (ms[i][j] == 0 && i != j)
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
