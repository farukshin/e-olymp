//https://www.e-olymp.com/ru/problems/5282
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

    vector<int> mn(n, 1005), mx(m, -1005);
    vector<vector<int>> v (n, vector<int> (m));

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            if(v[i][j] < mn[i])
                mn[i] = v[i][j];
            if(v[i][j] > mx[j])
                mx[j] = v[i][j];
        }

    int ans = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(v[i][j] == mn[i] && v[i][j] == mx[j])
                ans++;
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