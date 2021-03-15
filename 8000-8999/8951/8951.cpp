//https://www.e-olymp.com/ru/problems/8951
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;
    vector<vector<char>> v(n, vector<char>(n, ' '));
    int m = n / 2;

    for(int i = 0; i < n; i++)
    {
        int l, r, d;

        if(i <= m)
            d = i;
        else
            d = n - i - 1;
        l = m - d, r = m + d;
        v[i][l] = '*';
        v[i][r] = '*';
        // for(int j=l;j<=r;j++)
        // 	v[i][j]='*';
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << v[i][j];
        cout << "\n";
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