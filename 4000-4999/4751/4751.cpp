//https://www.e-olymp.com/ru/problems/4751
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(4);

    int n;
    cin >> n;

    vector<vector<int>> v(n, vector<int>(n));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> v[i][j];

    ll s1 = 0, s2 = 0;
    for(int i = 0; i < n; i++)
        s1 += v[i][i], s2 += v[i][n - 1 - i];

    cout << s1 << " " << s2 << endl;

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