//https://www.e-olymp.com/ru/problems/4749
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> v1(n, vector<int> (m)), v2(n, vector<int> (m));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> v1[i][j];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> v2[i][j];

    ll ans = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            ans += v1[i][j] * v2[i][j];
    cout << ans << endl;
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