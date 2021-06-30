// https://www.e-olymp.com/ru/problems/4105
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n, m, k;
vector<int> rx = {0, 1, 0, -1, 1, 1, -1, -1};
vector<int> ry = {1, 0, -1, 0, -1, 1, -1, 1};

void upd(int i, int j, vector<vector<char>> & v)
{
    int ans = 0;
    for(int l = 0; l < 8; l++)
    {
        int ii = i + rx[l];
        int jj = j + ry[l];
        if(ii >= 0 && ii < n && jj >= 0 && jj < m && v[ii][jj] == '*')
            ans++;
    }
    if(ans)
        v[i][j] = '0' + ans;
    else v[i][j] = '.';
}

void solve()
{
    cin >> n >> m >> k;

    vector<vector<char>> v(n, vector<char>(m, ' '));
    for(int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        v[a][b] = '*';
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(v[i][j] == ' ')
                upd(i, j, v);
            cout << v[i][j];
        }
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}