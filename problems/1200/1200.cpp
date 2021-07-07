// https://www.e-olymp.com/ru/problems/1200
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n, m;
int runx [4] = {0, 1, 0, -1};
int runy [4] = {1, 0, -1, 0};

void dfs(int a, int b, vector<string> &v, vector<vector<bool>> & used)
{
    used[a][b] = true;

    for(int i = 0; i < 4; i++)
    {
        int aa = a + runx[i];
        int bb = b + runy[i];
        if(aa >= 00 && aa < n && bb >= 0 && bb < m && v[aa][bb] == '#' && !used[aa][bb])
            dfs(aa, bb, v, used);
    }
}

void solve()
{

    cin >> n >> m;

    vector<string> v(n);
    vector<vector<bool>> used(n, vector<bool>(m, false));

    for(int i = 0; i < n; i++)
        cin >> v[i];

    int ans = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(!used[i][j] && v[i][j] == '#')
                dfs(i, j, v, used), ans++;
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    //solve();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}