// https://www.e-olymp.com/ru/problems/2590
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n;
vector<vector<bool>> used;
vector<string> v;
int r1[4] = {0, 1, 0, -1};
int r2[4] = {1, 0, -1, 0};

void dfs(int i, int j)
{
    used[i][j] = true;

    for(int k = 0; k < 4; k++)
    {
        int ii = i + r1[k];
        int jj = j + r2[k];
        if(ii >= 0 && ii < n && jj >= 0 && jj < n && !used[ii][jj])
            dfs(ii, jj);
    }
}

void solve()
{

    cin >> n;

    used.resize(n, vector<bool> (n, false));
    v.resize(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        for(int j = 0; j < n; j++)
            if(v[i][j] == '.')
                used[i][j] = true;
    }

    int ans = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(!used[i][j])
                ans++, dfs(i, j);
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    return 0;
}