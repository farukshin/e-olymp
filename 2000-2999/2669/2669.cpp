// https://www.e-olymp.com/ru/problems/2669
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> v[i][j];
    cout << m << " " << n << "\n";
    for(int i = 0; i < m; i++)
    {
        for(int j = n - 1; j >= 0; j--)
            cout << v[j][i] << (j != 0 ? " " : "");
        cout << (i != m - 1 ? "\n" : "");
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(2);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}