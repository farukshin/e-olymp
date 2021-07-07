// https://www.e-olymp.com/ru/problems/1058
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n, m, k;
vector<vector<int>> v;
vector<vector<bool>> used;
int runx[4] = {0, 1, 0, -1};
int runy[4] = {1, 0, -1, 0};
int curAns = 0;

void dfs(int a, int b)
{
    used[a][b] = true;
    curAns++;

    for(int i = 0; i < 4; i++)
    {
        int aa = a + runx[i];
        int bb = b + runy[i];
        if(aa >= 0 && aa < n && bb >= 0 && bb < m && !used[aa][bb] && v[aa][bb])
            dfs(aa, bb);
    }
}


void solve()
{
    cin >> n >> m >> k;
    v.resize(n, vector<int> (m, 0));
    used.resize(n, vector<bool> (m, false));

    for(int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        v[a][b] = 1;
    }

    int ans = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(!used[i][j] && v[i][j])
            {
                curAns = 0;
                dfs(i, j);
                ans = max(ans, curAns);
            }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}