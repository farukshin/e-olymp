//https://www.e-olymp.com/ru/problems/1966
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n, cur;
    cin >> n;
    vector<vector<char>> v(2 * n + 1, vector<char>(2 * n + 1, '.'));
    for(int i = 0; i < 2 * n + 1; i++)
        v[(2 * n + 1) / 2][i] = '*', v[i][(2 * n + 1) / 2] = '*';

    for(int i = 0; i < 2 * n + 1; i++)
    {
        for(int j = 0; j < 2 * n + 1; j++)
            cout << v[i][j];
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