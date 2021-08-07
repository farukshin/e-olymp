// https://www.e-olymp.com/ru/problems/1463
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;

    int v[n][n], row[n], col[n];
    memset(row, 0, sizeof row);
    memset(col, 0, sizeof col);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> v[i][j], row[i] += v[i][j], col[j] += v[i][j];

    int x{0}, y{INT_MAX};
    int ii, jj;
    for(int i = 0; i < n; i++)
    {
        if(row[i] > x)
            x = row[i], ii = i;
        if(col[i] < y)
            y = col[i], jj = i;
    }

    cout << v[ii][jj];
}

int main()
{
    cout.setf(std::ios::fixed);
    cout.precision(6);

    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}