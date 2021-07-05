//https://www.e-olymp.com/ru/problems/4112
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

vector<string> input;
vector<vector<bool>> used;
int n, m;
int ans = 0;
int r1[4] = {0, 1, -1, 0};
int r2[4] = {1, 0, 0, -1};

void dfs(int i, int j)
{
    used[i][j] = true;

    for (int k = 0; k < 4; k++)
    {
        int ii = i + r1[k];
        int jj = j + r2[k];

        if (ii >= 0 && ii < n && jj >= 0 && jj < m && input[ii][jj] == '#' && !used[ii][jj])
            dfs(ii, jj);
    }
}

void solve()
{
    cin >> n >> m;

    used.resize(n, vector<bool>(m, false));
    input.resize(n);

    for (int i = 0; i < n; i++)
        cin >> input[i];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (input[i][j] == '#' && !used[i][j])
                dfs(i, j), ans++;
    cout << ans;
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