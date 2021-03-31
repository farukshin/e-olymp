// https://www.e-olymp.com/ru/problems/5070
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

vector<vector<int>> input;
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

        if (ii >= 0 && ii < n && jj >= 0 && jj < m && input[ii][jj] == 0 && !used[ii][jj])
            dfs(ii, jj);
    }
}

void solve()
{
    cin >> n >> m;

    used.resize(n, vector<bool>(m, false));
    input.resize(n, vector<int>(m, -1));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> input[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (input[i][j] == 0 && !used[i][j])
                dfs(i, j), ans++;
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    // cout.setf(std::ios::fixed); cout.precision(2);

    solve();
    return 0;
}