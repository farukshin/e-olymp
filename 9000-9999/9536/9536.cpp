//https://www.e-olymp.com/ru/problems/9536
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

    vector<vector<int>> a(n, vector<int> (m));
    vector<vector<int>> b(n, vector<int> (m));

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> a[i][j];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> b[i][j];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cout << a[i][j] + b[i][j] << " ";
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
    //int t; cin >> t; while (t--) solve();

    return 0;
}