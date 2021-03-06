//https://www.e-olymp.com/ru/problems/9564
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
    vector<int> sum(n, -1e5);
    vector<vector<int>> v(n, vector<int>(m));

    int mx = -1e5;

    for(int i = 0; i < n; i++)
    {
        int sm = 0;
        for(int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            sm += v[i][j];
        }
        sum[i] = sm;
        if(mx < sm)
            mx = sm;
    }

    for(int i = 0; i < n; i++)
        if(sum[i] == mx)
            cout << i + 1 << " ";
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
    //int t; cin >> t; while (t--) solve();

    return 0;
}