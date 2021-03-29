// https://www.e-olymp.com/ru/problems/2667
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    vector<vector<int>> v(n, vector<int>(m, 0));

    int k = 0;
    for(int i = 0; i < n; i++)
        if(i % 2 == 0)
            for(int j = 0; j < m; j++)
                v[i][j] = k, k++;
        else
            for(int j = m - 1; j >= 0; j--)
                v[i][j] = k, k++;

    cout << v[--a][--b];
}


int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(9);

    solve();
    //int t; cin >> t; while(t--) solve();
    return 0;
}