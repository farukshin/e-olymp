// https://www.e-olymp.com/ru/problems/593
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<bool>> v(n, vector<bool>(m, false));

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(i % 2 == 0 && j % 2 != 0 || i % 2 != 0 && j % 2 == 0)
                v[i][j] = true;

    map<bool, char> mp;
    mp[v[n - 1][0]] = '.';
    mp[!(v[n - 1][0])] = 'X';

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cout << mp[v[i][j]];
        cout << (i != n - 1 ? "\n" : "");
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}